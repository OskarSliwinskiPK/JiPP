#include <hrms.hpp>
//#include "../include/lab6/hrms.hpp"

using namespace std;

Hrms::Hrms() { ; }

void Hrms::add(Employee& empl, string departmentID, double salary){
    if (departmentID != empl.getdepartmentID())
    {
        stringstream errorMsg;
        errorMsg << "Department id of employee does not match to argument!!" << endl 
        << departmentID << " Employee departamentID: " << empl.getdepartmentID();
        throw invalid_argument(errorMsg.str());
    }
    if (salary < 0)
    {
        stringstream errorMsg;
        errorMsg << "Salary for " << empl.getName() << " " << empl.getSurname() << " is = " << salary << " !! Should be grater or equal 0!!";
        throw invalid_argument(errorMsg.str());
    }

    EmployeesList.push_back(empl.getID());  
    Employees.insert({empl.getID(),empl});
    Departments.insert({empl.getID(), departmentID});
    Salaries.insert({empl.getID(), salary});
}

void Hrms::printDepartment(string departmentID){
    cout << "Employees from " << departmentID << " department: " << endl;
    map<string, string>::iterator it;
    for(it=Departments.begin(); it!=Departments.end(); ++it){
        if(it->second == departmentID){
            cout << "Name: " << this -> Employees[it->first].getName() << endl;
            cout << "Surname: " << this -> Employees[it->first].getSurname() << endl;
            cout << "Position: " << this -> Employees[it->first].getPosition() << endl;
            cout << "-----------------------------------------------------" << endl;
        }
    }
}

void Hrms::changeSalary(string employeeID, double salary){
    if (salary < 0)
    {
        stringstream errorMsg;
        errorMsg << "Salary for " << employeeID <<" is = " << salary << " !! Should be grater or equal 0!!";
        throw invalid_argument(errorMsg.str());
    }

    for(auto &element : this -> Salaries){
        if(element.first == employeeID){
            element.second = salary;
        }
    }
}

void Hrms::printSalaries(){
    cout << "List of employees: " << endl;
    cout << "-----------------------------------------------------" << endl;
    for(auto &element : this -> Salaries){
        cout << "Name: " << this -> Employees[element.first].getName() << endl;
        cout << "Surname: " << this -> Employees[element.first].getSurname() << endl;
        cout << "Position: " << this -> Employees[element.first].getPosition() << endl;
        cout << "Department ID: " << this -> Employees[element.first].getdepartmentID() << endl;
        cout << "Salary: " << element.second << endl;
        cout << "-----------------------------------------------------" << endl << endl;
    }
}

void Hrms::printSalariesSorted(){
    vector<pair<string,double>> tempSalaries;
    for(auto it=Salaries.begin();it!=Salaries.end();it++)
    {
        tempSalaries.push_back(make_pair(it->first,it->second));
    }
    sort(tempSalaries.begin(), tempSalaries.end(), sortByVal);
    
    cout << "List of employees: " << endl;
    cout << "-----------------------------------------------------" << endl;
    vector<pair<string, double>>::iterator it2;
    for (it2 = tempSalaries.begin(); it2 != tempSalaries.end(); it2++){
        cout << "Name: " << this -> Employees[it2->first].getName() << endl;
        cout << "Surname: " << this -> Employees[it2->first].getSurname() << endl;
        cout << "Position: " << this -> Employees[it2->first].getPosition() << endl;
        cout << "Department ID: " << this -> Employees[it2->first].getdepartmentID() << endl;
        cout << "Salary: " << it2->second << endl;
        cout << "-----------------------------------------------------" << endl << endl;
    }
}

bool Hrms::sortByVal(const pair<string, double> &a, const pair<string, double> &b)
{
    return (a.second > b.second);
}