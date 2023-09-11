#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H

#include "insertion_sort.cpp"

template<typename T>
void selection_sort(T *arr, int n) {
    /*
     * Simple example of selections sort
     * Speed: O(n^2)
     * Memory: O(n)
     * Each iteration, find the smallest value and append it to the end of the current sorted list
     */
    std::cout << "Starting selection sort in place\n";
    //Loop through each element of the list
    for (int i = 0; i < n-1; ++i) {
        //Loop through the remaining elements of the list
        int min_index{i}; 
        for (int j = i; j < n; ++j) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        //Swap the min value with the current start
        std::swap(arr[min_index],arr[i]);
        std::cout << i << " | ";
        print_array(arr, n, i);
    }
}
#endif
