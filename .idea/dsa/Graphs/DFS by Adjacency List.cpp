//#include "bits/stdc++.h"
//
//using namespace std;
//
//void dfs(int i, vector<int> adj[], int V, vector<int> &v, bool *isVisited) {
//    isVisited[i] = true;
//    v.push_back(i);
//    for (int j = 0; j < adj[i].size(); j++) {
//        if (!isVisited[adj[i][j]]) {
//            dfs(adj[i][j], adj, V, v, isVisited);
//        }
//    }
//}
//
//vector<int> getDFS(int V, vector<int> adj[]) {
//    vector<int> v;
//    bool *isVisited = new bool[V];
//    for (int i = 0; i < V; i++) {
//        isVisited[i] = false;
//    }
//    dfs(0, adj, V, v, isVisited);
//    return v;
//
//}
//
//int main() {
//    int v, e;
//    cin >> v >> e;
//    vector<int> edges[v];
//    for (int i = 0; i < e; i++) {
//        int fv, sv;
//        cin >> fv >> sv;
//        edges[fv].push_back(sv);
//        edges[sv].push_back(fv);
//    }
//    vector<int> solution = getDFS(v, edges);
//    for (int i:solution) {
//        cout << i << " ";
//    }
//    return 0;
//}