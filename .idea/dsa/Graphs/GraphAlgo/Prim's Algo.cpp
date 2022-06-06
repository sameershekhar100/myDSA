//#include "bits/stdc++.h"
//
//using namespace std;
//
//int getMinVertex(bool *isVisited, int *weight, int n) {
//    int minVertex = -1;
//    for (int i = 0; i < n; ++i) {
//        if (!isVisited[i] && (minVertex == -1 || weight[minVertex] > weight[i])) {
//            minVertex = i;
//        }
//    }
//    return minVertex;
//}
//void prims(int **edges, int n) {
//
//    bool *isVisited = new bool[n];
//    for (int i = 0; i < n; ++i) {
//        isVisited[i] = false;
//    }
//    int *parent = new int[n];
//    int *weight = new int[n];
//    for (int i = 0; i < n; ++i) {
//        weight[i] = INT32_MAX;
//    }
//    weight[0] = 0;
//    parent[0] = -1;
//    for (int i = 0; i < n - 1; ++i) {
//        //obtain the vertex with minimum weight
//        int minVertex = getMinVertex(isVisited, weight, n);
//        isVisited[minVertex] = true;
//
//        //explore all the neighbours of min vertex and update parent and weight
//        for (int j = 0; j < n; ++j) {
//
//            if (edges[minVertex][j] != 0 && !isVisited[j]) {
//                if (weight[j] > edges[minVertex][j]) {
//                    weight[j] = edges[minVertex][j];
//                    parent[j] = minVertex;
//                }
//            }
//        }
//    }
//    for (int i = 1; i < n; ++i) {
//        if (parent[i] < i) {
//            cout << parent[i] << " " << i << " " << weight[i] << endl;
//        } else
//            cout << i << " " << parent[i] << " " << weight[i] << endl;
//    }
//    delete[] parent;
//    delete[] isVisited;
//    delete[] weight;
//
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
//        int f, s, weight;
//        cin >> f >> s >> weight;
//        edges[f][s] = weight;
//        edges[s][f] = weight;
//    }
//    prims(edges, n);
//
//
//    for (int i = 0; i < n; ++i) {
//        delete[] edges[i];
//    }
//    delete[] edges;
//    return 0;
//}