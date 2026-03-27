#include <bits/stdc++.h>
using namespace std;


void mergeArray(vector<int>& nums, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> leftArr(n1), rightArr(n2);

    for (int i = 0; i < n1; i++)
        leftArr[i] = nums[left + i];

    for (int i = 0; i < n2; i++)
        rightArr[i] = nums[mid + 1 + i];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            nums[k] = leftArr[i];
            i++;
        } else {
            nums[k] = rightArr[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        nums[k] = leftArr[i];
        i++; k++;
    }

    while (j < n2) {
        nums[k] = rightArr[j];
        j++; k++;
    }
}

void mergeSort(vector<int>& nums, int left, int right) {
    if (left >= right) return;

    int mid = left + (right - left) / 2;

    mergeSort(nums, left, mid);
    mergeSort(nums, mid + 1, right);

    mergeArray(nums, left, mid, right);
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    mergeSort(nums, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
