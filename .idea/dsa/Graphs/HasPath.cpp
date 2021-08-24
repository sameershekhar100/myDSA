//#include "bits/stdc++.h"
//
//using namespace std;
////has path for a weighted graph using dfs
//bool HasPathDFS(int **edges, int n, int start, int end, bool *isVisited) {
//    if (edges[start][end] == 10) {
//        return true;
//    }
//    isVisited[start] = true;
//    for (int i = 0; i < n; i++) {
//        if (i == start) {
//            continue;
//        }
//        bool c = false;
//        if (edges[start][i] == 10 && !isVisited[i])
//            c = HasPathDFS(edges, n, i, end, isVisited);
//        if (c)
//            return true;
//    }
//    return false;
//}
//
//int_fast32_t main() {
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
//        int f, s,v;
//        cin >> f >> s>>v;
//        edges[f][s] = v;
//        edges[s][f] = v;
//    }
//    int start, end;
//    cin >> start >> end;
//    bool *isVisited = new bool[n];
//    for (int i = 0; i < n; ++i) {
//        isVisited[i] = false;
//    }
//    cout << HasPathDFS(edges, n, start, end, isVisited);
//    for (int i = 0; i < n; ++i) {
//        delete[] edges[i];
//    }
//
//    return 0;
//}