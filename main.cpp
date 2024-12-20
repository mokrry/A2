#include "array_generator.h"
#include "sort_tester.h"
#include <iostream>
#include "helping_functions.h"

int main() {
    std::vector<float> merge_sort_rnd_arr_timings;
    std::vector<float> merge_sort_rev_arr_timings;
    std::vector<float> merge_sort_near_sorted_arr_timings;\

    std::vector<float> merge_insertion_sort_rnd_arr_timings;
    std::vector<float> merge_insertion_sort_rev_arr_timings;
    std::vector<float> merge_insertion_sort_near_sorted_arr_timings;

    //подготовка массивов
    for (int size = 500; size <= 10000; size += 100) {

        std::vector<int> randomArray = ArrayGenerator::generateRandomArray(size);
        std::vector<int> reverseArray = ArrayGenerator::generateReverseSortedArray(size);
        std::vector<int> nearlySortedArray = ArrayGenerator::generateNearlySortedArray(size);

        merge_sort_rnd_arr_timings.push_back(0);
        merge_sort_rev_arr_timings.push_back(0);
        merge_sort_near_sorted_arr_timings.push_back(0);

        merge_insertion_sort_rnd_arr_timings.push_back(0);
        merge_insertion_sort_rev_arr_timings.push_back(0);
        merge_insertion_sort_near_sorted_arr_timings.push_back(0);
    }

    int n = 50;
    for(int i=0; i<=n; i++){
        for (int size = 500; size <= 10000; size += 100) {
            std::cout << "Testing size: " << size << std::endl;

            // Генерация массивов
            std::vector<int> randomArray = ArrayGenerator::generateRandomArray(size);
            std::vector<int> reverseArray = ArrayGenerator::generateReverseSortedArray(size);
            std::vector<int> nearlySortedArray = ArrayGenerator::generateNearlySortedArray(size);

            // Тестирование Merge Sort
            merge_sort_rnd_arr_timings[(size-500)/100] += SortTester::testMergeSort(randomArray);
            merge_sort_rev_arr_timings[(size-500)/100] += SortTester::testMergeSort(reverseArray);
            merge_sort_near_sorted_arr_timings[(size-500)/100] += SortTester::testMergeSort(nearlySortedArray);

            // Тестирование Hybrid Sort
            merge_insertion_sort_rnd_arr_timings[(size-500)/100] += SortTester::testMergeInsertionSort(randomArray);
            merge_insertion_sort_rev_arr_timings[(size-500)/100]+= SortTester::testMergeInsertionSort(reverseArray);
            merge_insertion_sort_near_sorted_arr_timings[(size-500)/100] +=SortTester::testMergeInsertionSort(nearlySortedArray);
        }
    }

    for (int size = 500; size <= 10000; size += 100) {
        merge_sort_rnd_arr_timings[(size-500)/100] /=n;
        merge_sort_rev_arr_timings[(size-500)/100] /=n;
        merge_sort_near_sorted_arr_timings[(size-500)/100] /=n;

        // Тестирование Hybrid Sort
        merge_insertion_sort_rnd_arr_timings[(size-500)/100] /=n;
        merge_insertion_sort_rev_arr_timings[(size-500)/100] /=n;
        merge_insertion_sort_near_sorted_arr_timings[(size-500)/100] /=n ;
    }

    std::vector<std::vector<float>> vec;
    vec.push_back(merge_sort_rnd_arr_timings);
    vec.push_back(merge_sort_rev_arr_timings);
    vec.push_back(merge_sort_near_sorted_arr_timings);
    vec.push_back(merge_insertion_sort_rnd_arr_timings);
    vec.push_back(merge_insertion_sort_rev_arr_timings);
    vec.push_back(merge_insertion_sort_near_sorted_arr_timings);

    writeCSV(vec, "output.csv");

    return 0;
}


/*
#include "array_generator.h"
#include "sort_tester.h"
#include <iostream>
#include "helping_functions.h"

int main() {
    std::vector<float> merge_sort_rnd_arr_timings;
    std::vector<float> merge_sort_rev_arr_timings;
    std::vector<float> merge_sort_near_sorted_arr_timings;\

    std::vector<float> merge_insertion_sort_rnd_arr_timings;
    std::vector<float> merge_insertion_sort_rev_arr_timings;
    std::vector<float> merge_insertion_sort_near_sorted_arr_timings;

    //подготовка массивов
    for (int size = 500; size <= 10000; size += 100) {

        std::vector<int> randomArray = ArrayGenerator::generateRandomArray(size);
        std::vector<int> reverseArray = ArrayGenerator::generateReverseSortedArray(size);
        std::vector<int> nearlySortedArray = ArrayGenerator::generateNearlySortedArray(size);

        merge_sort_rnd_arr_timings.push_back(0);
        merge_sort_rev_arr_timings.push_back(0);
        merge_sort_near_sorted_arr_timings.push_back(0);

        merge_insertion_sort_rnd_arr_timings.push_back(0);
        merge_insertion_sort_rev_arr_timings.push_back(0);
        merge_insertion_sort_near_sorted_arr_timings.push_back(0);
    }

    for(int i=0; i<=50; i++){

    }
    for (int size = 500; size <= 10000; size += 100) {
        std::cout << "Testing size: " << size << std::endl;

        // Генерация массивов
        std::vector<int> randomArray = ArrayGenerator::generateRandomArray(size);
        std::vector<int> reverseArray = ArrayGenerator::generateReverseSortedArray(size);
        std::vector<int> nearlySortedArray = ArrayGenerator::generateNearlySortedArray(size);

        // Тестирование Merge Sort
        merge_sort_rnd_arr_timings.push_back(SortTester::testMergeSort(randomArray));
        merge_sort_rev_arr_timings.push_back(SortTester::testMergeSort(reverseArray));
        merge_sort_near_sorted_arr_timings.push_back(SortTester::testMergeSort(nearlySortedArray));

        // Тестирование Hybrid Sort
        merge_insertion_sort_rnd_arr_timings.push_back(SortTester::testMergeInsertionSort(randomArray));
        merge_insertion_sort_rev_arr_timings.push_back(SortTester::testMergeInsertionSort(reverseArray));
        merge_insertion_sort_near_sorted_arr_timings.push_back(SortTester::testMergeInsertionSort(nearlySortedArray));
    }
    std::vector<std::vector<float>> vec;
    vec.push_back(merge_sort_rnd_arr_timings);
    vec.push_back(merge_sort_rev_arr_timings);
    vec.push_back(merge_sort_near_sorted_arr_timings);
    vec.push_back(merge_insertion_sort_rnd_arr_timings);
    vec.push_back(merge_insertion_sort_rev_arr_timings);
    vec.push_back(merge_insertion_sort_near_sorted_arr_timings);

    writeCSV(vec, "output.csv");

    return 0;
}
*/

