//#include "bits/stdc++.h"
//
//using namespace std;
//
//void getDFS(int **edges, int n, int sv, bool *isVisited, vector<int> *v1) {
//    v1->push_back(sv);
//    isVisited[sv] = true;
//    for (int i = 0; i < n; ++i) {
//        if (i == sv) {
//            continue;
//        }
//        if (edges[sv][i] == 1 && !isVisited[i]) {
//            getDFS(edges, n, i, isVisited, v1);
//        }
//    }
//}
//
//
//
//void DFS(int **edges, int n) {
//    bool *isVisited = new bool[n];
//    vector<vector<int> *> v;
//    for (int i = 0; i < n; i++) {
//        isVisited[i] = false;
//    }
//    for (int i = 0; i < n; ++i) {
//        if (!isVisited[i]) {
//            vector<int> *v1 = new vector<int>;
//            getDFS(edges, n, i, isVisited, v1);
//            v.push_back(v1);
//        }
//    }
//    for (int i = 0; i < v.size(); i++) {
//        for (vector<int>::iterator it = v[i]->begin(); it != v[i]->end(); ++it) {
//            cout << *it << " ";
//        }
//        cout << endl;
//    }
//
//}
//
//int main() {
//    int n, e;
//
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
//
//        cin >> f >> s;
//        edges[f][s] = 1;
//        edges[s][f] = 1;
//    }
//
//    DFS(edges, n);
//
//
//    for (int i = 0; i < n; ++i) {
//        delete[] edges[i];
//    }
//}