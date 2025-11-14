#pragma once
#include "Sort.h"

class InsertionSort : public Sort
{
public:
    void Exec(int* array, int size) override;
};