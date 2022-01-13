//#include<bits/stdc++.h>
//
//using namespace std;
//
//void merge(int arr[], int l, int m, int r) {
//    // Your code here
//    int s1 = m - l + 1;
//    int s2 = r - m;
//
//    vector<int> v1(s1), v2(s2);
//    for (int i = 0; i < s1; i++) {
//        v1[i] = arr[i + l];
//    }
//    for (int i = 0; i < s2; i++) {
//        v2[i] = arr[m + 1 + i];
//    }
//    int i = 0, j = 0, k = l;
//    while (i < s1 and j < s2) {
//        if (v1[i] < v2[j]) {
//            arr[k] = v1[i];
//            i++;
//            k++;
//        } else {
//            arr[k] = v2[j];
//            j++;
//            k++;
//        }
//    }
//    while (i < s1) {
//        arr[k] = v1[i];
//        k++;
//        i++;
//    }
//    while (j < s2) {
//        arr[k] = v2[j];
//        k++;
//        j++;
//    }
//
//}
//
//void mergeSort(int arr[], int l, int r) {
//    //code here
//    if (l >= r) return;
//    int mid = (l + r) / 2;
//    mergeSort(arr, l, mid);
//    mergeSort(arr, mid + 1, r);
//    merge(arr, l, mid, r);
//    return;
//
//}
//
//int main() {
//    int v[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
//    mergeSort(v, 0, 9);
//    for (int i = 0; i < 9; i++) {
//        cout << v[i] << " ";
//    }
//    return 0;
//}
//
