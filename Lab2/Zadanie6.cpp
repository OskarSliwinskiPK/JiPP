#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// zmieniam wartości WSKAŹNIKÓW, a nie same wartości
template <class T> 
void swap(T **a, T **b) {
    // kopiuje wskaźnik do wartości, a nie samą wartość
    T* temp = *a;
    *a = *b;
    *b = temp;
}

int get_value(string name)
{
    int value;
    cout << "Podaj " << name << ": ";
    cin >> value;
    return value;
}

int main(){
    int a = 0, b = 0;
    a = get_value("a");
    b = get_value("b");
    int *aWsk = &a, *bWsk = &b;
    cout << "\n Zamiana int" << endl;
    cout << "Wartosci startowe a = " << *aWsk << endl;
    cout << "Wartosci startowe b = " << *bWsk << endl;
    //wywołanie funkcji swap 
    swap(aWsk, bWsk);
    cout << "Wartosci zmienione a = " << *aWsk << endl;
    cout << "Wartosci zmienione b = " << *bWsk << endl;

    cout << "\n Zamiana string" << endl;
    string A = "JEDEN", B = "DWA";
    string *AWsk = &A, *BWsk = &B;
    cout << "Wartosci startowe str A = " << *AWsk << endl;
    cout << "Wartosci startowe str B = " << *BWsk << endl;
    //wywołanie funkcji swap 
    swap(AWsk, BWsk);
    cout << "Wartosci zmienione str A = " << *AWsk << endl;
    cout << "Wartosci zmienione str B = " << *BWsk << endl;
}
