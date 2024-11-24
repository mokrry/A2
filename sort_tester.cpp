#include "sort_tester.h"
#include "insertion_sort.h"
#include "merge_insertion_sort.h"
#include "merge_sort.h"
#include <chrono>
#include <iostream>
#include "helping_functions.h"

float SortTester::testMergeSort(const std::vector<int>& array) {
    auto start = std::chrono::high_resolution_clock::now();
    std::vector<int> arrCopy = array;  // Копируем массив
    mergeSort(arrCopy);
    auto elapsed = std::chrono::high_resolution_clock::now() - start;
    float msec = std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();
    std::cout << "Merge Sort took " << msec << " microseconds." << std::endl;
    return msec;
}

float SortTester::testMergeInsertionSort(const std::vector<int>& array) {
    auto start = std::chrono::high_resolution_clock::now();
    std::vector<int> arrCopy = array;  // Копируем массив
    mergeInsertionSort(arrCopy);
    auto elapsed = std::chrono::high_resolution_clock::now() - start;
    float msec = std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();
    std::cout << "Hybrid Sort took " << msec << " microseconds." << std::endl;
    return msec;
}
