//#include <bits/stdc++.h>
//
//using namespace std;
//
//int dijkstra(int n, vector<vector<int>> adj[], int S, vector<int> v1) {
//    vector<bool> isVisited(n, false);
//    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
//    int ans = INT_MAX;
//    pair<int, int> startVertex = {0, S};
//    pq.push(startVertex);
//    while (!pq.empty()) {
//        pair<int, int> node = pq.top();
//        pq.pop();
//        int curr_vertex = node.second;
//        int curr_weight = node.first;
//        if (!isVisited[curr_vertex]) {
//            isVisited[curr_vertex] = true;
//            if(v1[curr_vertex]!=INT_MAX)
//                ans = min(ans, curr_weight + v1[curr_vertex]);
//            for (int i = 0; i < adj[curr_vertex].size(); ++i) {
//                pq.push({adj[curr_vertex][i][1] + curr_weight, adj[curr_vertex][i][0]});
//            }
//        }
//    }
//    return ans;
//}
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    int t;
//    cin >> t;
//
//    while (t--) {
//        //code here
//        int n, m, k;
//        cin >> n >> m >> k;
//        vector<int> v1(n, INT_MAX);
//        for (int i = 0; i < k; i++) {
//            int x, y;
//            cin >> x >> y;
//            x = x - 1;
//            v1[x] = y;
//        }
//        vector<vector<int>> v[n];
//        for (int i = 0; i < m; i++) {
//            int fv, sv, wt;
//            cin >> fv >> sv >> wt;
//            v[fv-1].push_back({sv-1, wt});
//            v[sv-1].push_back({fv-1, wt});
//        }
//        for (int i = 0; i < n; i++) {
//            int S = i;
//            int ans = dijkstra(n, v, S, v1);
//            cout <<  ans << " ";
//        }
//        cout << endl;
//
//    }
//    return 0;
//}
