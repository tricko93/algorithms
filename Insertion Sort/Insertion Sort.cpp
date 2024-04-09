
// Time Complexity: O(n^2)
// Space Complexity: O(1)

#include <iostream>

using namespace std;

void insertion_sort(int *arr, int n)
{
    int j, key;
    for(int i=1; i<n; i++) {
        key = arr[i];
        // Insert A[j] into the sorted sequence A[1..i-1].
        j=i-1;
        while (j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}

void print_array(int *arr, int n) {
    for (int i=0; i<n; i++)
        cout << arr[i] << ' ';
    cout << endl;
}

int main() {
    // Define Array
    int a[] = { 3, 1, 8, 10, 23, 0, -2, 9 };

    // Display unsorted array
    cout << "Unsorted array: ";
    print_array(a, 8);

    // Sort Array In-Place
    insertion_sort(a, 8);

    // Print Sorted Array
    cout << "Sorted array: ";
    print_array(a, 8);

    return 0;
}
