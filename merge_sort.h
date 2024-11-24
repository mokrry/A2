#ifndef MERGE_SORT_H
#define MERGE_SORT_H

#include <vector>
#include "insertion_sort.h"

void merge(std::vector<int>& arr, int left, int mid, int right) {
    // Создаем временные векторы для левой и правой половин
    std::vector<int> leftArr(arr.begin() + left, arr.begin() + mid + 1);
    std::vector<int> rightArr(arr.begin() + mid + 1, arr.begin() + right + 1);

    // Индексы для обхода временных векторов
    int i = 0, j = 0, k = left;

    // Слияние временных массивов обратно в основной массив
    while (i < leftArr.size() && j < rightArr.size()) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k++] = leftArr[i++];
        } else {
            arr[k++] = rightArr[j++];
        }
    }

    // Копируем оставшиеся элементы, если есть
    while (i < leftArr.size()) {
        arr[k++] = leftArr[i++];
    }

    while (j < rightArr.size()) {
        arr[k++] = rightArr[j++];
    }
}

void mergeSort(std::vector<int>& arr, int left, int right) {
    if (left < right) {
        // Находим середину массива
        int mid = left + (right - left) / 2;

        // Рекурсивно сортируем обе половины
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Сливаем отсортированные половины
        merge(arr, left, mid, right);
    }
}

void mergeSort(std::vector<int>& arr) {
    int left = 0, right = arr.size() - 1;
    mergeSort(arr, left, right);
}

#endif // MERGE_SORT_H
