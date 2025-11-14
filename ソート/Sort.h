#pragma once

class Sort
{
protected:
    void Swap(int& a, int& b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

public:
    // ”h¶ƒNƒ‰ƒX‚ÅÀ‘•‚·‚é‰¼‘zŠÖ”
    virtual void Exec(int* array, int size) = 0;
    virtual ~Sort() = default;
};

