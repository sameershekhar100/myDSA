//#include "iostream"
//
//using namespace std;
//
//void inplaceHeapSort(int arr[], int n) {
//
//    // creating a heap by inserting elements
//    for (int i = 1; i < n; i++) {
//        int childIdx = i;
//
//        while (childIdx > 0) {
//            if (arr[(childIdx - 1) / 2] > arr[childIdx]) //in case of max heap,comparison is opposite//
//            {
//                swap(arr[(childIdx - 1) / 2], arr[childIdx]);
//                childIdx = (childIdx - 1) / 2;
//            } else {
//                break;
//            }
//        }
//    }
//
//    //remove element algo for sorting
//    int size = n - 1;
//    while (size > 0) {
//        swap(arr[0], arr[size ]);
//
//        int parent = 0, lidx = 2 * parent + 1, ridx = 2 * parent + 2;
//        //down-heapify
//        while (lidx < size) {
//            int mini = parent;
//            if (arr[mini] > arr[lidx])//in case of max heap,comparison is opposite//
//                mini = lidx;
//            if (ridx < size && arr[mini] > arr[ridx])//in case of max heap,comparison is opposite//
//                mini = ridx;
//            if (parent == mini) {
//                break;
//            }
//            swap(arr[mini], arr[parent]);
//            parent = mini;
//            lidx = 2 * parent + 1;
//            ridx = 2 * parent + 2;
//        }
//        size--;
//
//    }
//}
//
//int main() {
//    int arr[] = {2, 6, 8, 5, 4, 3};
//    inplaceHeapSort(arr, sizeof arr / sizeof(int));//heapsort using O(1) space
//    for (int i:arr) {
//        cout << i << " ";
//    }
//    return 0;
//}