#pragma once
#include <iostream>

using namespace std;

struct INF
{
    int key;
    int info;
};

int Partition(INF arr[], int s, int e)
{
    INF pivot = arr[e];
    int pIndex = s;
    for (int i = s; i < e; i++)
    {
        if (arr[i].key <= pivot.key)
        {
            swap(arr[i], arr[pIndex]);
            pIndex++;
        }
    }
    swap(arr[e], arr[pIndex]);
    return pIndex;
}

void QuickSort(INF arr[], int s, int e)
{
    if (s < e)
    {
        int p = Partition(arr, s, e);
        QuickSort(arr, s, p - 1);
        QuickSort(arr, p + 1, e);
    }
}

void Bubble(INF arr[], int size)
{
    for (int i = 0; i < size; i++)

        for (int j = size - 1; j > i; j--)

            if (arr[j].key < arr[j - 1].key)

                swap(arr[j].key, arr[j - 1].key);
}
