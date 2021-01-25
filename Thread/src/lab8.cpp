#include <thread>
#include <mutex>
#include <iostream>
#include <cstdio>
#include <unistd.h>

using namespace std;

void jedzenie(int i, mutex widelec[])
{
    printf("F] %d mysli\n", i);
    widelec[i].lock();
    printf("F] %d bierze pierwszy widelec %d\n", i, i);
    widelec[(i+1)%5].lock();
    printf("F] %d bierze drugi widelec %d\n", i, (i+1)%5);

    printf("F] %d je \n", i);
    sleep(1);
    
    widelec[i].unlock();
    printf("F] %d odklada pierwszy widelec %d\n", i, i);
    widelec[(i+1)%5].unlock();
    printf("F] %d odklada drugi widelec %d\n", i, (i+1)%5);
    printf("F] %d wychodzi\n",i);
}

int main()
{
    thread filozof[5];
    mutex widelec[5];

    int i=0;
    
    for( i = 0; i < 5; i++)
    {
        filozof[i] = thread(jedzenie, i, widelec);
    }

    for( i = 0; i < 5; i++)
    {
        filozof[i].join();
    }

}