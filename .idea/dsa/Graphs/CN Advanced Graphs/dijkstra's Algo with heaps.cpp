//#include "bits/stdc++.h"
//
//using namespace std;
//
//vector<int> dijkstra(int S, vector<vector<int>> adj[], int n) {
//    vector<bool> isVisited(n, false);
//    priority_queue<pair<int, int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
//    vector<int> ans(n, 0);
//    pair<int, int> startVertex = {0, S};
//    pq.push(startVertex);
//    ans[S] = 0;
//    while (!pq.empty()) {
//        pair<int, int> node = pq.top();
//        pq.pop();
//        int curr_vertex = node.second;
//        int curr_weight = node.first;
//        if (!isVisited[curr_vertex]) {
//
//            isVisited[curr_vertex] = true;
//
//            ans[curr_vertex] = curr_weight;
//            for (int i = 0; i < adj[curr_vertex].size(); ++i) {
//                pq.push({adj[curr_vertex][i][1] + curr_weight, adj[curr_vertex][i][0]});
//            }
//        }
//    }
//    return ans;
//
//}
//
//int main() {
//    int n, e;
//    cin >> n >> e;
//    vector<vector<int>> v[n];
//    for (int i = 0; i < e; i++) {
//        int f, s, weight;
//        cin >> f >> s >> weight;
//        v[f].push_back({s, weight});
//        v[s].push_back({f, weight});
//    }
//        int S;
//        cin >> S;
//        vector<int> ans = dijkstra(S, v, n);
//    for (auto i:ans) {
//        cout<<i<<" ";
//    }
//
//
//}