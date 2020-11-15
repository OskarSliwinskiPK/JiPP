#include <iostream>
#include <string.h>
using namespace std;

int main (int argc, char *argv[])
{
    char* tab = (char*) malloc(sizeof(char));

    strcpy(tab,argv[1]); // skopiowanie argumentu do tablicy
    int len = strlen(tab);
    int i = 0;
    int j = strlen(tab)-1;
    while (i<j)
    {
        if (tab[i] != tab[j])
        {
            cout << "Podany ciąg nie jest palindromem" << endl;
            return -1;
        }
        i++;
        j--;
    }
    cout << "Podany ciąg jest palindromem" << endl;
    return 0;
}
