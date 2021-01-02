#include <employee.hpp>
//#include "../include/lab6/employee.hpp"

using namespace std;

Employee::Employee(string ID, string name, string surname, string departmentID, string position){
    this -> ID = ID;
    this -> name = name;
    this -> surname = surname;
    this -> departmentID = departmentID;
    this -> position = position;
}

Employee::Employee() { ; }
string Employee::getID(){
    return this -> ID;
}

string Employee::getName(){
    return this -> name;
}

string Employee::getSurname(){
    return this -> surname;
}

string Employee::getdepartmentID(){
    return this -> departmentID;
}

string Employee::getPosition(){
    return this -> position;
}

void Employee::printEmploye(){
    cout << "ID: " << this -> getID() << endl;
    cout << "Name: " << this -> getName() << endl;
    cout << "Surname: " << this -> getSurname() << endl;
    cout << "Position: " << this -> getSurname() << endl;
    cout << "Department ID: " << this -> getdepartmentID() << endl;
}

void Employee::printEmployeByDepID(){
    cout << "ID: " << this -> getID() << endl;
    cout << "Name: " << this -> getName() << endl;
    cout << "Surname: " << this -> getSurname() << endl;
    cout << "Position: " << this -> getSurname() << endl;
}