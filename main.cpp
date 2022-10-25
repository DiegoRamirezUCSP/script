#include <iostream>
#include <horse.h>
#include <nqueens.h>
#include <insertionsort.h>

using namespace std;

int main()
{
    int arr[100];
    srand(time(0));
    for(int i = 0;i < 100;i++)
        arr[i]=(rand() % 100 + 1);
    double x = horse();
    double y = nqueens();
    double z = insertionSort(arr,100);
    cout << x << " " << y << " " << z;

}
