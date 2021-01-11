#include <log.h>

#include <time.h>
#include <stdio.h>
#include <fstream>
#include <cstdio>
#include <iostream>

using namespace std;

string LOG::getLabel(typelog type)
{
    string label;
        switch(type) {
            case DEBUG: label = "DEBUG"; break;
            case INFO:  label = "INFO "; break;
            case WARN:  label = "WARN "; break;
            case ERROR: label = "ERROR"; break;
        }
        return label;
}

string LOG::getTime() 
{
        time_t rawtime;
        struct tm* timeinfo;

        time(&rawtime);
        timeinfo = localtime(&rawtime);

        static char _retval[20];
        strftime(_retval, sizeof(_retval), "%Y-%m-%d %H:%M:%S", timeinfo);

        return _retval;
}

void LOG::log_msg(typelog type, string msg)
{
    string time = getTime();
    string label = getLabel(type);
    this->msglevel = type;
    operator << ("["+time+"] "+"["+label+"] "+msg);
    int rc = 0;
    if(this->db == true){
        rc = insert_data(time, label, msg);
    }
    
    /*  
        rc = 0 - wynik komendy sqlite3_exec jest pozytywny 
        rc = 1 - wynik komendy sqlite3_exec jest negatywny
    */
    if (rc != 0) {
            string errlog = "Error inserting data: %d. Your log: %s", errMsg, msg;
            string newlabel = getLabel(DEBUG);
            operator << ("["+time+"] "+"["+newlabel+"] "+ errlog);
    }
}

void LOG::init(string filename){
    this->file = true;
    this->logfile.open (filename, ios::app);
}

LOG::LOG(typelog loggerLevel){
    this->opened = false;
    this->file = false;
    this->loggerLevel = loggerLevel;
}

void LOG::set_db(){
    int rc = sqlite3_open("db.sqlite", &this->database);
    if(rc) {
        string msg = "Can't open database";
        msg.append(sqlite3_errmsg(this->database));
        cout << msg << endl;
        this->log_msg(ERROR, msg);
        this->db = false;
    } else {
        this->db = true;
        this->log_msg(INFO, "Opened database successfully");
        createTableIfNotExists();
    }
}

void LOG::createTableIfNotExists() {
    const char *query;
    char **errMsg = nullptr;
    int rc;

    query = "CREATE TABLE IF NOT EXISTS mylogs(\n"
          "    id INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,\n"
          "    data TEXT NOT NULL,\n"
          "    label TEXT NOT NULL,\n"
          "    msg TEXT NOT NULL\n"
          ");";
    rc = sqlite3_exec(this->database, query, nullptr, nullptr, errMsg);

    if (rc != 0) {
        string msg = "Error creating table: %d", errMsg;
        this->log_msg(ERROR, msg);
    }
}

int LOG::insert_data(string time, string label, string msg){
    string query;
    char **errMsg = nullptr;
    int rc;
    
    query = "INSERT INTO mylogs ('data', 'label', 'msg') VALUES ('" + time + "', '" + label + "', '" + msg + "');";
    
    rc = sqlite3_exec(this->database, query.c_str(), nullptr, nullptr, errMsg);
    
    return rc;
}