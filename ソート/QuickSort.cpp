#include<iostream>
#include<algorithm>
#include<vector>

// 配列全体をクイックソートする関数
void quickSort(int arr[], int left, int right) {
    if (left < right) {
        // ピボットを決定し、分割する位置を返す
        int pivotIndex = partition(arr, left, right);

        // 左側の部分配列を再帰的にソート
        quickSort(arr, left, pivotIndex - 1);

        // 右側の部分配列を再帰的にソート
        quickSort(arr, pivotIndex + 1, right);
    }
}

// 分割処理を行う関数
int partition(int arr[], int left, int right) {
    // ここでピボットを選択する（例：配列の右端）
    int pivot = arr[right];
    // 左端からのインデックス
    int i = left - 1;

    for (int j = left; j < right; j++) {
        // 現在の要素がピボットより小さい場合
        if (arr[j] < pivot) {
            i++;
            // arr[i]とarr[j]を交換
            std::swap(arr[i], arr[j]);
        }
    }
    // ピボットを正しい位置に移動させる
    std::swap(arr[i + 1], arr[right]);
    // ピボットのインデックスを返す
    return i + 1;
}
