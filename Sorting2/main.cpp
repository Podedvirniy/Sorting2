#include <iostream>
#include <ctime>
#include "Fast.h"

using namespace std;

void FillArray(INF arr[], INF arr1[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i].key = arr1[i].key = rand() % 100000;
        arr[1].info = arr1[i].info = rand() % 10000000;
    }
}


void RestoreArray(INF arr[], INF arr1[], int size)
{

    for (int i = 0; i < size; i++)

        arr[i] = arr1[i];

}


int main()
{
    srand(time(NULL));
    const unsigned int size = 50000;
    INF A[size];
    INF B[size];
    FillArray(A, B, size);

    clock_t  begt, endt;
    begt = clock();
    QuickSort(A, 0, size - 1);
    endt = clock();
    cout << "time=" << endt - begt << endl;
    cout << "______________________________________________________________" << endl;
    RestoreArray(A, B, size);
    begt = clock();
    Bubble(A, size);
    endt = clock();
    cout << "time=" << endt - begt << endl;
}
