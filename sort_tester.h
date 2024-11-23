#ifndef SORT_TESTER_H
#define SORT_TESTER_H

#include <vector>

class SortTester {
public:
    static float testMergeSort(const std::vector<int>& array);
    static float testMergeInsertionSort(const std::vector<int>& array);
};

#endif // SORT_TESTER_H
