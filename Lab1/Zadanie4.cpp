#include <iostream>
#include <iomanip>
#include<string>
using namespace std;

int get_value(string name)
{
    int value;
    cout << "Podaj " << name << ": ";
    cin >> value;
    if (value < 1)
    {
        cout << "ERROR: Podaj poprawna wartosc! ( > 1)" << endl;
        value = get_value(name);
    }
    return value;
}

int check(int value)
{
    int sum = 0;
    for(int i=1;i<value;i++)
    {
        if (value % i ==0)
            sum += i;
    }
    return sum;
}

int main()
{
    int a;
    int sum_a;
    int b;
    int sum_b;
    a = get_value("a");
    b = get_value("b");
    sum_a = check(a);
    if (sum_a == b+1)
    {
        sum_b = check(b);
        if (sum_b == a+1)
        {
            cout << "Liczby a i b sa skojarzone";
            return 0;
        }
    }
    cout << "Liczby a i b nie sa skojarzone";
    return 0;
}
