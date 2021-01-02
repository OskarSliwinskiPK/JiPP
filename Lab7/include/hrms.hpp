#ifndef HRMS
#define HRMS
#include<list>
#include<map>
#include<algorithm>
#include<vector>
#include<sstream>
#include<iostream>

using namespace std;

#include <employee.hpp>
//#include "./employee.hpp"

class Hrms{
    private:
        //kontener pracowników
        list <string> EmployeesList;
        map <string, Employee> Employees;

        // mapowanie departmentID - pracownicy
        map <string, string> Departments;
        // mapowanie pracownik - zarobki
        map <string, double> Salaries;
        // kopia ktora będzie posortowana
        map <string, double> SalariesSorted;

        static bool sortByVal(const pair<string, double> &a, const pair<string, double> &b);

    public:
        //CONSTRUCTOR
        Hrms();
        //DECONSTRUCTOR
        
        void add(Employee& empl, string departmentID, double salary);
        void printDepartment(string departmentID);
        void changeSalary(string employeeID, double salary);
        void printSalaries();
        void printSalariesSorted();

};


#endif  /*HRMS*/