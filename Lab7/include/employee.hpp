#ifndef EMPL
#define EMPL

#include <string>
#include <iostream>

using namespace std;

class Employee {
    private: 
        string ID;
        string name;
        string surname;
        string departmentID;
        string position;
        friend class Hrms;
    public:
    Employee(string ID, string name, string surname, string departmentID, string position);
    Employee();
    string getID();
    string getName();
    string getSurname();
    string getdepartmentID();
    string getPosition();
    void printEmploye();
    void printEmployeByDepID();

};

#endif /*EMPL*/