#include <iostream>

#include <employee.hpp>
#include <hrms.hpp>

void test(){
    Hrms tests;

    cout << "Tests" << endl;
    cout << "-----------------------------------------------------" << endl;
    try
    {
        cout << endl;
        cout << "Trying add an Employee to system with other departmentID" << endl;
        Employee tester0("tester", "tester", "IdTest", "DepIdTest0", "tester");
        tests.add(tester0, "FALSEDepIdTest", 9999.99);
    }
    catch (invalid_argument &e)
    {
        cerr << "Error: " << e.what() << endl << endl;
    }

    try
    {
        cout << endl;
        cout << "Trying to add an Employee to salary < 0" << endl;
        Employee tester1("tester", "tester", "IdTest", "DepIdTest0", "tester");
        tests.add(tester1, "DepIdTest0", -1500);
    }
    catch (invalid_argument &e)
    {
        cerr << "Error: " << e.what() << endl << endl;
    }
    cout << "-----------------------------------------------------" << endl;
}

int main(){
    test();
    cout << endl << endl << endl;

    Employee a1("ID1", "Piotr", "Kowal", "depID4", "Kelner");
    Employee a2("ID2", "Paweł", "Kowalski", "depID4", "Kelner");
    Employee a3("ID3", "Patryk", "Polak", "depID4", "Kelner");
    Employee a4("ID4", "Bartosz", "Nowak", "depID5", "Zmywak");
    Employee a5("ID5", "Mateusz", "Nowakowski", "depID2", "Kucharz");
    Employee a6("ID6", "Filip", "Kowalczyk", "depID2", "Kucharz");
    Employee a7("ID7", "Artur", "Kot", "depID3", "Pomocnik kucharza");
    Employee a8("ID8", "Arkadiusz", "Malinowski", "depID3", "Pomocnik kucharza");
    Employee a9("ID9", "Adrian", "Majerski", "depID6", "Dostawca");
    Employee a10("ID10", "Mateusz", "Musiał", "depID1", "Kierownik");

    Hrms db;

    db.add(a1, "depID4", 2400.0);
    db.add(a2, "depID4", 2350.0);
    db.add(a3, "depID4", 2600.0);
    db.add(a4, "depID5", 2200.0);
    db.add(a5, "depID2", 4500.0);
    db.add(a6, "depID2", 5000.0);
    db.add(a7, "depID3", 3200.0);
    db.add(a8, "depID3", 3600.0);
    db.add(a9, "depID6", 2500.0);
    db.add(a10, "depID1", 6700.0);

    db.printDepartment("depID3");
    cout << endl << endl;
    db.printSalaries();
    cout << endl << endl;
    db.printSalariesSorted();
    cout << endl << endl;
    db.changeSalary("ID8", 4000.0);
    db.printSalaries();

    return 0;
}