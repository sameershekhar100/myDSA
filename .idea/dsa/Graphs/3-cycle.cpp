//#include "bits/stdc++.h"
//
//using namespace std;
//
//void countCycle(int **edges, int n) {
//    int count = 0;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            if (edges[i][j] == 1) {
//                for (int k = 0; k < n; ++k) {
//                    if (k != i && edges[j][k] == 1 && edges[k][i] == 1) {
//                        count++;
//                    }
//
//                }
//            }
//        }
//    }
//    cout << count / 6 << endl;
//}
//
//int main() {
//    int n, e;
//    cin >> n >> e;
//    int **edges = new int *[n];
//    for (int i = 0; i < n; i++) {
//        edges[i] = new int[n];
//        for (int j = 0; j < n; j++) {
//            edges[i][j] = 0;
//        }
//    }
//    for (int i = 0; i < e; i++) {
//        int f, s;
//        cin >> f >> s;
//        edges[f][s] = 1;
//        edges[s][f] = 1;
//    }
//    countCycle(edges, n);
//    for (int i = 0; i < n; ++i) {
//        delete[] edges[i];
//    }
//}