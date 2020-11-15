#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

//swap opierający się na wartościach ze wskaźników
template <class T> 
void swap(T *a, T *b) {
    T temp = *a;
    *a = *b;
    *b = temp;
}

// test funkcji
template <class T>
void swap_test(T a, T b) {
    T a_test = a, b_test = b;
    swap(&a_test, &b_test);

    // porownanie wartosci przed i po
    if (a_test == b && b_test == a) 
        cout << "Poprawnie\n" << endl;
    else 
        cout << "Nie poprawnie\n" << endl;
}

int get_value(string name)
{
    int value;
    cout << "Podaj " << name << ": ";
    cin >> value;
    return value;
}

int main()
{
    int a = 0, b = 0;
    a = get_value("a");
    b = get_value("b");
    cout << "\n Zamiana int" << endl;
    cout << "Wartosci startowe a = " << a << endl;
    cout << "Wartosci startowe b = " << b << endl;
    //wywołanie funkcji swap 
    swap(&a, &b);
    cout << "Wartosci zmienione a = " << a << endl;
    cout << "Wartosci zmienione b = " << b << endl;

    cout << "\nSprawdzam dzialanie w przypadku int" << endl;
    swap_test(a,b);

    // stringi
    cout << "\nZamiana string" << endl;
    string A = "JEDEN", B = "DWA";
    cout << "Wartosci startowe str A = " << A << endl;
    cout << "Wartosci startowe str B = " << B << endl;
    //wywołanie funkcji swap 
    swap(&A, &B);
    cout << "Wartosci zmienione str A = " << A << endl;
    cout << "Wartosci zmienione str B = " << B << endl;

    cout << "\nSprawdzam dzialanie w przypadku string" << endl;
    swap_test(A,B);
}
