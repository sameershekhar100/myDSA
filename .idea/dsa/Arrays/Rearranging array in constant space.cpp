//#include "bits/stdc++.h"
//
//using namespace std;
//
////store the element as arr[i]=arr[i]+n*arr[arr[i]] as then arr[i]/n give the req ans and arr[i]%n give the initial element.
//void solve(int arr[], int n) {
//    for (int i = 0; i < n; i++) {
//        int temp = arr[i];
//        arr[i] = arr[i] + arr[arr[i]] % n * n;
//    }
//    for (int i = 0; i < n; i++) {
//        arr[i] = arr[i] / n;
//    }
//}
//
//int main() {
//    string s="sameer";
//    cout<<s.substr(1);
//    int arr[] = {4, 0, 2, 1, 3};
//    solve(arr, 5);
//}