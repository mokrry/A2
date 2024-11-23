#ifndef A2_MERGE_INSERTION_SORT_H
#define A2_MERGE_INSERTION_SORT_H

#include <vector>
#include "insertion_sort.h"
#include "merge_sort.h"

void mergeInsertionSort(std::vector<int>& arr, int left, int right) {
    if (left >= right) return;

    if (right - left + 1 <= 15) {
        insertionSort(arr, left, right);
    } else {
        int mid = left + (right - left) / 2;
        mergeInsertionSort(arr, left, mid);
        mergeInsertionSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

#endif //A2_MERGE_INSERTION_SORT_H
