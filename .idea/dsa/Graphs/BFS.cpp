//#include "bits/stdc++.h"
//
//using namespace std;
//
//void printBFS(int **edges, int n, int sv, bool *isVisited) {
//
//
//    queue<int> RemainingVertex;
//    RemainingVertex.push(sv);
//    isVisited[sv] = true;
//    while (!RemainingVertex.empty()) {
//        int top = RemainingVertex.front();
//        cout << top << endl;
//        RemainingVertex.pop();
//
//        for (int i = 0; i < n; i++) {
//            if (i == top)
//                continue;
//            if (edges[top][i] == 1 && !isVisited[i]) {
//                RemainingVertex.push(i);
//                isVisited[i] = true;
//            }
//        }
//    }
//
//}
//
//void BFS(int **edge, int n) {
//    bool *isVisited = new bool[n];
//    for (int i = 0; i < n; i++) {
//        isVisited[i] = false;
//    }
//    for (int i = 0; i < n; i++) {
//        if (!isVisited[i])
//            printBFS(edge, n, i, isVisited);
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
//
//    BFS(edges, n);
//    for (int i = 0; i < n; ++i) {
//        delete[] edges[i];
//    }
//
//}
//
