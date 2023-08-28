#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H

#include <iostream>

/*
    Simple example of Insertion Sort
    Speed: O(n^2)
    Memory: O(n)
    The basic idea is to insert one value at a time into an array/sorted linked list/etc.
    so that the list remains in order with each insertion
*/

template <typename T>
void print_array(T *arr, int n, int j) {
    /*
        Simple loop that prints out an array, but also adds an identifier for which step the sort is on
    */
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
        if (i == j) {
            std::cout << "|";
        }
    }
    std::cout << "\n";
}

template <typename T>
void insertion_sort(T *arr, int n) {
    std::cout << "Starting sort of array in place\n";
    // Loop through each element of the list
    for (int i = 0; i < n; ++i) {
        // Insert from end the current value by shifting to the right anything larger
        T tmp = arr[i];

        int j = i - 1;
        while (j>=0 && arr[j] > tmp) {
            arr[j+1] = arr[j]; // Shift by one
            --j;
        }
        // Insert tmp value into position
        arr[j+1] = tmp;
        std::cout << i << " | ";
        print_array(arr, n, i);
    }
    std::cout << "Array has been sorted in place\n\n";
}

#endif
