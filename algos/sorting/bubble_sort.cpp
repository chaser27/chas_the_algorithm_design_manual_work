#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

#include <iostream>

template<typename T>
void print_array(T *arr, int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

template<typename T>
void bubble_sort(T *arr, int n) {
    /*
     * Simple example of bubble sort
     * Speed: O(n^2)
     * Memory: O(n)
     * Basic idea is to loop through the list and continually push values up that 
     * are less then the next element and pull values down that are the opposite. 
     * Each iteration you get closer to the final solution, but isn't very efficient.
     */

    //Loop through each element of the list
    for (int i = n; i > 1; --i) {
        for (int j = 0; j < i - 1; ++j) {
            if (arr[j] > arr[j+1]) {
                std::swap(arr[j],arr[j+1]);
            }
        }

        std::cout << n-i << " | ";
        print_array(arr, n);
    }
}

#endif
