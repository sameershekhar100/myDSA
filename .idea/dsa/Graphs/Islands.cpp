//#include "bits/stdc++.h"
//
//using namespace std;
//
//void getBFS(int** edges, int n, int a, bool *isVisited) {
//
//    isVisited[a] = true;
//    queue<int> queue;
//    queue.push(a);
//    while (!queue.empty()){
//        int p=queue.front();
//        queue.pop();
//        for(int i=0;i<n;i++){
//            if(i==p){
//                continue;
//            }
//            if(edges[p][i]==1&&!isVisited[i]){
//                queue.push(i);
//                isVisited[i]= true;
//            }
//        }
//    }
//
//}
//
//void BFS(int **edges, int n) {
//    bool *isVisited = new bool[n];
//    int x = 0;
//    for (int i = 0; i < n; i++) {
//        isVisited[i] = false;
//    }
//    for (int i = 0; i < n; i++) {
//        if (!isVisited[i]) {
//            x++;
//            getBFS(edges, n, i, isVisited);
//        }
//    }
//    cout<<x<<endl;
//}
//
//int main() {
//    int n, e;
//    cin >> n >> e;
//    int **edges = new int *[n];
//    for (int i = 0; i < n; i++) {
//        edges[i] = new int[n];
//        for (int j = 0; j < n; ++j) {
//            edges[i][j] = 0;
//        }
//    }
//
//    for (int i = 0; i < e; i++) {
//        int s, f;
//        cin >> s >> f;
//        edges[s][f] = 1;
//        edges[f][s] = 1;
//    }
//
//    BFS(edges, n);
//    for (int i = 0; i < n; ++i) {
//        delete[] edges[i];
//    }
//}