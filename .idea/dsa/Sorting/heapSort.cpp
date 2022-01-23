//#include "iostream"
//
//using namespace std;
//
////Heapify function to maintain heap property.
//void heapify(int arr[], int n, int i) {
//    // Your Code Here
//    while (i > 0) {
//        int parent = (i - 1) / 2;
//        if (arr[parent] < arr[i]) {
//            swap(arr[parent], arr[i]);
//            i = parent;
//        } else {
//            break;
//        }
//    }
//
//
//}
//
////Function to build a Heap from array.
//void buildHeap(int arr[], int n) {
//    // Your Code Here
//    for (int i = 1; i < n; i++)
//        heapify(arr, n, i);
//
//
//}
//
//
//void heapSort(int arr[], int n) {
//    //code here
//    buildHeap(arr, n);
//    int size = n;
//    while (size > 1) {
//        swap(arr[0], arr[size - 1]);
//        size--;
//
//        int parent = 0, l = 2 * parent + 1, r = 2 * parent + 2;
//        while (l < size) {
//            int mini = parent;
//            if (arr[mini] < arr[l]) mini = l;
//            if (r < size and arr[mini] < arr[r]) mini = r;
//            if (parent == mini) break;
//            swap(arr[mini], arr[parent]);
//            parent = mini;
//            l = 2 * parent + 1;
//            r = 2 * parent + 2;
//        }
//    }
//
//
//}
//
//int main() {
//    int arr[] = {2, 6, 8, 5, 4, 3, 0};
//    heapSort(arr, sizeof arr / sizeof(int));//heapsort using O(1) space
//    for (int i:arr) {
//        cout << i << " ";
//    }
//    return 0;
//}