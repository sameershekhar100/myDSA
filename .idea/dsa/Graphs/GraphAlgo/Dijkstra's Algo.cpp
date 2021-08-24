//#include "bits/stdc++.h"
//
//using namespace std;
//
//int getMinVertex(bool *isVisited, int *distance, int n) {
//    int minVertex = -1;
//    for (int i = 0; i < n; ++i) {
//        if (!isVisited[i] && (minVertex == -1 || distance[i] < distance[minVertex])) {
//            minVertex = i;
//        }
//    }
//    return minVertex;
//}
//
//void findMinDistance(int **edges, int n) {
//    bool *isVisited = new bool[n];
//    for (int i = 0; i < n; ++i) {
//        isVisited[i] = false;
//    }
//    int *distance = new int[n];
//    for (int i = 0; i < n; ++i) {
//        distance[i] = INT32_MAX;
//    }
//    distance[0] = 0;
//    for (int i = 0; i < n - 1; ++i) {
//        int minVertex = getMinVertex(isVisited, distance, n);
//        isVisited[minVertex] = true;
//        //explore all the neighbours of minVertex which are unvisited and
//        //update the distance array accordingly
//        for (int j = 0; j < n; ++j) {
//            if (edges[minVertex][j] != 0 && !isVisited[j]) {
//                if (distance[j] > distance[minVertex] + edges[minVertex][j])
//                    distance[j] = distance[minVertex] + edges[minVertex][j];
//            }
//        }
//    }
//    for (int i = 0; i < n; ++i) {
//        cout << i << " " << distance[i] << endl;
//    }
//    delete[] isVisited;
//    delete[] distance;
//}
//
//int main() {
//    int n, e;
//    cin >> n >> e;
//    int **edges = new int *[n];
//    for (int i = 0; i < n; i++) {
//        edges[i]=new int[n];
//        for (int j = 0; j < n; ++j) {
//            edges[i][j] = 0;
//        }
//    }
//    for (int i = 0; i < e; ++i) {
//        int fv, sv, weight;
//        cin >> fv >> sv >> weight;
//        edges[fv][sv] = weight;
//        edges[sv][fv] = weight;
//    }
//
//    findMinDistance(edges, n);
//    for (int i = 0; i < n; ++i) {
//        delete[] edges[i];
//    }
//    delete[] edges;
//
//}