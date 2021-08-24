//#include "bits/stdc++.h"
//
//using namespace std;
//
//void printDFS(int **edges, int n, int sv, bool *isVisited) {
//    cout << sv << endl;
//    isVisited[sv] = true;
//    for (int i = 0; i < n; i++) {
//        if (i == sv)
//            continue;
//        if (edges[sv][i] == 1 && !isVisited[i]) {
//            printDFS(edges, n, i, isVisited);
//        }
//    }
//}
//
//void DFS(int **edges, int n) {
//    bool *isVisited = new bool[n];
//
//    for (int i = 0; i < n; i++) {
//        isVisited[i] = false;
//    }
//    for (int i = 0; i < n; ++i) {
//        if (!isVisited[i]) {
//            printDFS(edges, n, i, isVisited);
//        }
//    }
//    for (int i = 0; i < n; i++) {
//        if (!isVisited[i]) {
//            cout << "Not Conncted";
//        }
//    }
//    delete[] isVisited;
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
//
//    DFS(edges, n);
//
//    for (int i = 0; i < n; ++i) {
//        delete[] edges[i];
//    }
//}