/* 
 * File:   Log.h
 * Author: Alberto Lepe <dev@alepe.com>
 *
 * Created on December 1, 2015, 6:00 PM
 */

#ifndef LOG_H
#define LOG_H

#include <iostream>
#include <time.h>
#include <stdio.h>
#include <fstream>
#include <string.h>
#include <sqlite3/sqlite3.h>

using namespace std;

enum typelog {
    DEBUG,
    INFO,
    WARN,
    ERROR
};

class LOG {
public:
    LOG(typelog loggerLevel);

    template<class T>
    LOG &operator<<(const T &msg) {   
        if (this->msglevel >= this->loggerLevel){
            if (this->file == true) {
                cout << msg << endl;
                this->logfile << msg << endl;
            }
            else {
                cout << msg << endl;
            }
            if (this->db == true){

            }
        }
        return *this;
    }
    void init(string filename);
    void log_msg(typelog type, string msg);
    void set_db();
private:
    sqlite3* database;
    bool opened = false;
    bool file = false;
    bool db = false;
    ofstream logfile;
    typelog loggerLevel = DEBUG;
    typelog msglevel = DEBUG;
    string getLabel(typelog type);
    string getTime();
    void createTableIfNotExists();
    int insert_data(string time, string label, string msg);
};

#endif  /* LOG_H */
