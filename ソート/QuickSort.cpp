#include "QuickSort.h"

void QuickSort::QuickSortRecursive(int* array, int left, int right)
{
    int i = left;
    int j = right;
    int pivot = array[(left + right) / 2];

    while (i <= j)
    {
        while (array[i] < pivot) i++;
        while (array[j] > pivot) j--;

        if (i <= j)
        {
            Swap(array[i], array[j]);
            i++;
            j--;
        }
    }
    if (left < j) QuickSortRecursive(array, left, j);
    if (i < right) QuickSortRecursive(array, i, right);
}

void QuickSort::Exec(int* array, int size)
{
    QuickSortRecursive(array, 0, size - 1);
}
