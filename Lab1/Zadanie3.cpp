#include <iostream>
#include <iomanip>
#include<string>
using namespace std;

double bmi_calc(double weight, double height)
{
    
    return (weight)/(height * height);
}

double ask(string name)
{
    double value;
    cout << "Podaj " << name;
    cin >> value;
    return value;
}

int main ()
{
    double weight;
    double height;
    double BMI;
    weight = ask("wage [kg]: ");
    while(weight <= 0){
        cout << "ERROR: Podaj poprawna wage! ( > 0 kg)" << endl;
        weight = ask("wage [kg]: ");}
    height = ask("wzrost [m]: ");
    while(height > 2.5 || height <= 0){
        cout << "ERROR: Podaj poprawny wzrost (0 - 2.5m)!" << endl;
        height = ask("wzrost [m]: ");}
    BMI = bmi_calc(weight, height);
    if(BMI < 16.0)
        cout << "BMI: " << setprecision(4) << BMI << " - Wyglodzenie" << endl;
    else if((16.0 < BMI) && (BMI < 16.99))
        cout << "BMI: " << setprecision(4) << BMI << " - wychudzenie" << endl;
    else if((17.0 < BMI) && (BMI < 18.49))
        cout << "BMI: " << setprecision(4) << BMI << " - niedowaga" << endl;
    else if((18.5 < BMI) && (BMI < 24.99))
        cout << "BMI: " << setprecision(4) << BMI << " - wartosc prawidlowa" << endl;
    else if((25 < BMI) && (BMI < 29.99))
        cout << "BMI: " << setprecision(4) << BMI << " - nadwaga" << endl;
    else if((30 < BMI) && (BMI < 34.99))
        cout << "BMI: " << setprecision(4) << BMI << " - I stopien otylosci" << endl;
    else if((35 < BMI) && (BMI < 39.99))
        cout << "BMI: " << setprecision(4) << BMI << " - II stopien otylosci" << endl;
    else if(BMI > 40)
        cout << "BMI: " << setprecision(4) << BMI << " - otylosc skrajna" << endl;
    return 0;
}
