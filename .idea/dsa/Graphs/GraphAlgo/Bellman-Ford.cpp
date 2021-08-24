//Given a graph and a source vertex src in graph, find shortest paths from src to all vertices in the given graph.
// The graph may contain negative weight edges.
// Dijkstra doesn’t work for Graphs with negative weight edges, Bellman-Ford works for such graphs.

//Create an array dist[] of size |V| with all values as infinite except dist[src]=0 where src is source vertex.
//create a parent array of size |V| with all values as 0 except parent[src]=-1
// Do following |V|-1 times where |V| is the number of vertices in given graph. :
// itreate over all edges and check weather
//if(dist[v] > dist[u] + weight(u-v), then update dist[v]=dist[u] + weight(u-v)
//after n-1 iterations iterate over all edges in the graph once again and if dis[any node] element is updated again
//then it proves that graph contains a -ve edge weight cycle else it will give the Shortest Path Tree(SPT)

//#include "bits/stdc++.h"
//
//using namespace std;
//
//int IsNegCycle(int n, vector<vector<int>> edges) {
//    vector<int> parent(n, 0);
//    vector<int> dis(n, INT32_MAX);
//    parent[0] = -1;
//    dis[0] = 0;
//    int temp = n - 1;
//    bool updated;
//    while (temp--) {
//        updated = false;
//        for (int i = 0; i < edges.size(); i++) {
//            int u = edges[i][0];
//            int v = edges[i][1];
//            int w = edges[i][2];
//
//            if (dis[u] + w < dis[v]) {
//                dis[v] = dis[u] + w;
//                parent[v] = u;
//                updated = true;
//            }
//        }
//        if (!updated) {
//
//            break;
//        }
//    }
//    for (int i = 0; i < edges.size() && updated; i++) {
//        int u = edges[i][0];
//        int v = edges[i][1];
//        int w = edges[i][2];
//
//        if (dis[u] + w < dis[v]) {
//            cout << "graph has negative edge weight cycle" << endl;
//            return 1;
//        }
//    }
//    for (int i = 1; i < n; ++i) {
//        cout << "U->V: " << parent[i] << "->" << i << " Cost to reach " << parent[i] <<
//             " from source 0 = " << dis[i] << endl;
//    }
//    return 0;
//}
//int main() {
//    int n, e;
//    cin >> n >> e;
//    vector<vector<int>> edges;      //edge array which stores directed edge and respective weight
//    for (int i = 0; i < e; ++i) {
//        int fv, sv, wt;
//        cin >> fv >> sv >> wt;
//        edges.push_back({fv, sv, wt});
//    }
//    int ans = IsNegCycle(n, edges);
//    int  x[3][3]={{1,2,3},{4,5,6},{7 ,8 ,9}};
//
//    cout << ans;
//}