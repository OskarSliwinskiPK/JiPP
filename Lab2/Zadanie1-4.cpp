#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// Zad 1
// jako argumenty wskaźniki do zmiennych:
void swap_wsk(int *a, int *b)
{
    if (*b < *a){
    int pom = *a;
        *a = *b;
        *b = pom;
    }
}

//Zad 2
// jako argumenty referencje do zmiennych:
void swap_ref(int &a, int &b)
{
    int pom = a;
        a = b;
        b = pom;
}

//Zad 3
// argumenty mieszane:
void swap_mix(int &a, int *b)
{
    int pom = a;
        a = *b;
        *b = pom;
}

//Zad 4
// funkcja zwracająca 2 wartości:
int double_return(int a, int b, int *sum)
{
    *sum = a + b;
    return a * b;
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
    int a = 0, b = 0, sum = 0, multip = 0;
    a = get_value("a");
    b = get_value("b");
    // przekazanie do funkcji
    swap_wsk(&a, &b);
    cout << "Funkcja z arg jako wskazniki       :" << a << endl;
    cout << "Funkcja z arg jako wskazniki       :" << b << endl;
    // przekazanie do funkcji
    swap_ref(a, b);
    cout << "Funkcja z arg jako referencje      :" << a << endl;
    cout << "Funkcja z arg jako referencje      :" << b << endl;
    // przekazanie do funkcji
    swap_mix(a, &b);
    cout << "Funkcja z arg mix                  :" << a << endl;
    cout << "Funkcja z arg mix                  :" << b << endl;
    // a, b - składniki działań, sum - wskaznik na wynik sumy
    multip = double_return(a, b, &sum);
    cout << "Wynik z return (mnozenie)          :" << multip << endl;
    cout << "Wynik przez wskaznik (dodawanie)   :" << sum << endl;
}
