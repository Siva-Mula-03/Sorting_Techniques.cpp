#include <bits/stdc++.h>
using namespace std;

// Function to heapify a subtree rooted at index 'i'
// 'n' is the size of the heap
void heapify(int arr[], int n, int i) {
    int largest = i; // Assume root is the largest
    int l = 2 * i + 1; // Left child index
    int r = 2 * i + 2; // Right child index

    // If left child exists and is greater than root
    if (l < n && arr[l] > arr[largest]) {
        largest = l;
    }
    // If right child exists and is greater than the largest so far
    if (r < n && arr[r] > arr[largest]) {
        largest = r;
    }

    // If the largest is not root, swap and continue heapifying
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest); // Recursively heapify the affected subtree
    }
}

// Function to perform heap sort
void heapsort(int arr[], int n) {
    // Step 1: Build a max heap
    // Start from the last non-leaf node and heapify each node up to root
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }

    // Step 2: Extract elements from the heap one by one
    for (int i = n - 1; i >= 0; i--) {
        swap(arr[0], arr[i]); // Move current root (largest element) to the end
        heapify(arr, i, 0); // Heapify the reduced heap
    }
}

int main() {
    int arr[] = {23, 56, 78, 65, 45, 32, 23, 15, 89}; // Input array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate size of array

    heapsort(arr, n); // Call heap sort function

    // Print sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

