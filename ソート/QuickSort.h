#pragma once
#include "Sort.h"

class QuickSort : public Sort
{
private:
    void QuickSortRecursive(int* array, int left, int right);

public:
    void Exec(int* array, int size) override;
};