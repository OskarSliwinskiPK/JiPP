#include <iostream>
#include <algorithm>
using namespace std;

void printer(int *tab, int len)
{
    for (int i=0; i < len; i++)
        cout << tab[i] << endl;
}

int main (int argc, char *argv[])
{
    int* tab = (int*) malloc(sizeof(int));

    for (int i=0; i < argc; i++)
        tab[i] = atoi(argv[i+1]);

    sort(tab, tab + (argc-1));
    printer(tab, argc-1);

    return 0;
}

