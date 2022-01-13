#include<bits/stdc++.h>

using namespace std;

int partition(int arr[], int low, int high) {
    int i = low, j = high;
    int pivot = arr[low];
    while (i < j) {
        while (i <= high and arr[i] <= pivot) i++;
        while (j >= 0 and arr[j] > pivot) j--;
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(int arr[], int low, int high) {
    // code here
    int x;
    if (low < high) {
        x = partition(arr, low, high);

        quickSort(arr, low, x - 1);
        quickSort(arr, x + 1, high);
    }
}

int main() {
    int v[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    quickSort(v, 0, 9);
    for (int i = 0; i < 9; i++) {
        cout << v[i] << " ";
    }
    return 0;
}

