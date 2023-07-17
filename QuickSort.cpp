#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>& nums, int low, int high) {
    int pivot = nums[low];
    int i = low + 1;
    int j = high;

    while (i <= j) {
        while (i <= j && nums[i] <= pivot) {
            i++;
        }
        while (i <= j && nums[j] > pivot) {
            j--;
        }

        if (i < j) {
            swap(nums[i], nums[j]);
        }
    }

    swap(nums[low], nums[j]);

    return j;
}

void Qsort(vector<int>& nums, int low, int high) {
    if (low >= high) {
        return;
    }
    int p = partition(nums, low, high);
    Qsort(nums, low, p - 1);
    Qsort(nums, p + 1, high);
}

int main() {
    vector<int> arr{12, 22, 32, 45, 87, 56, 43, 23, 98, 13};
    int n = arr.size();
    Qsort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
