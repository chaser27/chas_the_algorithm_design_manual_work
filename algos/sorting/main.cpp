#include "insertion_sort.cpp"

int main() {
    std::cout << "Testing Insertion Sort\n";
    int a[] = {4,5,3,9,0,1,6,8,7,2};
    float b[] = {1.0,0.1,0.8,0.4,0.3,0.5,0.9,0.7,0.2,0.6};
    char c[] = "chas keithan";

    std::cout << "Sorting\n";
    insertion_sort(a, sizeof(a)/sizeof(a[0]));
    insertion_sort(b, sizeof(b)/sizeof(b[0]));
    insertion_sort(c, sizeof(c)/sizeof(c[0]));
}
