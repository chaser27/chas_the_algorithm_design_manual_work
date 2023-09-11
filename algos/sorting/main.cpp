#include "insertion_sort.cpp"
#include "selection_sort.cpp"
#include "bubble_sort.cpp"

#include <cstring>

int main() {
    std::cout << "Testing Insertion Sort\n";
    int perm_a[] = {4,5,3,9,0,1,6,8,7,2};
    float perm_b[] = {1.0,0.1,0.8,0.4,0.3,0.5,0.9,0.7,0.2,0.6};
    char perm_c[] = "chas keithan";

    int n_a = sizeof(perm_a)/sizeof(perm_a[0]);
    int n_b = sizeof(perm_b)/sizeof(perm_b[0]);
    int n_c = sizeof(perm_c)/sizeof(perm_c[0]);

    std::cout << n_a << "," << n_b << "," << n_c << "\n";
    //Define tmp vars to sort
    int a[n_a];
    float b[n_b];
    char c[n_c];

    std::cout << "Sorting\n";
    //Assign to starting values
    memcpy(a, perm_a, sizeof(perm_a));
    memcpy(b, perm_b, sizeof(perm_b));
    memcpy(c, perm_c, sizeof(perm_c));

    insertion_sort(a, n_a);
    insertion_sort(b, n_b);
    insertion_sort(c, n_c);

    std::cout << "Testing Selection Sort\n";
    //Assign to starting values
    memcpy(a, perm_a, sizeof(perm_a));
    memcpy(b, perm_b, sizeof(perm_b));
    memcpy(c, perm_c, sizeof(perm_c));

    std::cout << "Sorting\n";
    selection_sort(a, n_a);
    selection_sort(b, n_b);
    selection_sort(c, n_c);

    std::cout << "Testing Bubble Sort\n";
    //Assign to starting values
    memcpy(a, perm_a, sizeof(perm_a));
    memcpy(b, perm_b, sizeof(perm_b));
    memcpy(c, perm_c, sizeof(perm_c));

    std::cout << "Sorting\n";
    bubble_sort(a, n_a);
    bubble_sort(b, n_b);
    bubble_sort(c, n_c);
}
