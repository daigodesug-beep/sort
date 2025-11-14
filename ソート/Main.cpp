#include <iostream>
#include <vector>
#include <chrono>
#include <cstdlib> // rand()
#include "QuickSort.h"
#include "InsertionSort.h"

using namespace std;

// 配列を表示する関数
void ShowArray(const vector<int>& array)
{
    for (int num : array)
    {
        cout << num << " ";
    }
    cout << endl;
}

int main()
{
    constexpr int Size = 10;

    // ランダムな配列を作成
    vector<int> data(Size);
    for (int i = 0; i < Size; i++)
    {
        data[i] = rand() % 100;
    }

    cout << "ソート前：";
    ShowArray(data);

    // ソートクラスを選ぶ
    Sort* sorter = new QuickSort();       // クイックソート
    // Sort* sorter = new InsertionSort();      // 挿入ソート

    auto start = chrono::system_clock::now();

    sorter->Exec(data.data(), Size);

    auto end = chrono::system_clock::now();
    double elapsed = chrono::duration_cast<chrono::milliseconds>(end - start).count();

    cout << "ソート後：";
    ShowArray(data);

    cout << "処理時間：" << elapsed << " ms" << endl;

    delete sorter;

    return 0;
}
