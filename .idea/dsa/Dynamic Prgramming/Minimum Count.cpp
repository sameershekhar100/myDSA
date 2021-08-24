///*
//Given an integer N, find and return the count of minimum numbers required to represent N as a sum of squares.
//That is, if N is 4, then we can represent it as : {1^2 + 1^2 + 1^2 + 1^2} and {2^2}.
//The output will be 1, as 1 is the minimum count of numbers required to represent N as sum of squares.
//Sample Input 1 :
//12
//
//Sample Output 1 :
//3
// */
//#include "bits/stdc++.h"
//
//using namespace std;
//
//int MinSquares1(int n) {
//    vector<int> v(n + 1, INT32_MAX);
//    v[0] = 0;
//    v[1] = 1;
//    v[2] = 2;
//    v[3] = 3;
//    if (n > 3) {
//        for (int i = 4; i <= n; i++) {
//            int p = sqrt(i);
//            if (sqrt(i) - p == 0) {
//                v[i] = 1;
//                continue;
//            }
//            for (int j = 1; j <= p; j++) {
//                v[i] = min(v[i], 1 + v[i - j * j]);
//            }
//        }
//    }
//    return v[n];
//}
//
//int MinSquares(int *arr, int n) {
//    if (n <= 3) {
//        arr[n] = n;
//        return n;
//    }
//    int p = sqrt(n);
//    if (sqrt(n) - p == 0) {
//        return 1;
//    }
//    int sol = INT_MAX;
//    for (int i = 1; i <= p; i++) {
//
//        if (arr[n - i * i] != -1) {
//            sol = min(sol, 1 + arr[n - i * i]);
//            continue;
//        }
//        sol = min(sol, 1 + MinSquares(arr, n - i * i));
//    }
//
//    arr[n] = sol;
//    return sol;
//}
//
//int main() {
//    int n;
//    cin >> n;
//    int *arr = new int[n];
//    for (int i = 0; i < n; i++) {
//        arr[i] = -1;
//    }
////    cout << MinSquares(arr, n);//memoization
//    cout << endl << MinSquares1(n);//DP approach
//
//}