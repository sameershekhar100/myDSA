//// The Floyd Warshall Algorithm is for solving the All Pairs Shortest Path problem.
//// The problem is to find shortest distances between every pair of vertices in a given edge weighted directed Graph.
//
////The idea is to one by one pick all vertices and updates all shortest paths which include the picked vertex
//// as an intermediate vertex in the shortest path.
//// If k is an intermediate vertex in shortest path from i to j. We update the value of dist[i][j] as
//// (dist[i][k] + dist[k][j]) if (dist[i][j] > dist[i][k] + dist[k][j])
////this algo is a dynamic programming approach as we are checking all the solutions and picking the best existing solution.
//#include "bits/stdc++.h"
//using namespace std;
//void FloydWarshall(vector<vector<int>> edges,int n){
//
//    vector<vector<int>> dist(n,vector<int>(n));
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < n; ++j) {
//            dist[i][j]=edges[i][j];
//        }
//    }
//    for (int k = 0; k < n; ++k) {
//        for (int i = 0; i < n; ++i) {
//            for (int j = 0; j < n; ++j) {
//                if(dist[i][k]==INT32_MAX||dist[k][j]==INT32_MAX){
//                    continue;
//                }
//                else{
//                    if(dist[i][j]>dist[i][k]+dist[k][j]){
//                        dist[i][j]=dist[i][k]+dist[k][j];
//                    }
//                }
//            }
//        }
//    }
//    for (int i = 0; i < n; ++i) {
//        if(dist[i][i]<0){
//            cout<<"graph has negative edge weight cycle"<<endl;
//            return;
//        }
//    }
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < n; ++j) {
//            cout<<i<<" to "<<j<<" distance is "<<dist[i][j]<<endl;
//        }
//        cout<<"=========================\n";
//    }
//
//}
//int main(){
//
//    int n,e;
//    cin>>n>>e;
//    //input will be taken in the form of adjacency matrix
//    vector<vector<int>> edges(n,vector<int>(n,INT32_MAX));
//    for (int i = 0; i < e; ++i) {
//        int fv,sv,wt;
//        cin>>fv>>sv>>wt;
//        edges[fv][sv]=wt;
//    }
//    FloydWarshall(edges,n);
//}
//#include "bits/stdc++.h"
//using namespace std;
//bool isBipartite(int V, vector<int>adj[]){
//    // Code here
//    queue<int> q;
//    q.push(0);
//    unordered_set<int> m1,m2;
//    m1.insert(0);
//    while(!q.empty()){
//        int node=q.front();
//        q.pop();
//        int currentSet=0;
//        if(m1.count(node)){
//            currentSet=0;
//        }
//        else{
//            currentSet=1;
//        }
//        for(int i=0;i<adj[node].size();i++){
//            int curr=adj[node][i];
//            if(m1.count(curr)==0&&m2.count(curr)==0){
//                if(currentSet==1){
//                    m1.insert(curr);
//                }
//                else{
//                    m2.insert(curr);
//                }
//                q.push(curr);
//            }
//            else
//            {
//                if((currentSet==1&&m2.count(curr)>0)||(currentSet==0&&m1.count(curr)>0))
//                    return false;
//            }
//        }
//    }
//    return true;
//}
//int main() {
//    int n, e;
//    cin >> n >> e;
//    vector<int> v[n];
//    for (int i = 0; i < e; i++) {
//        int f, s;
//        cin >> f >> s ;
//        v[f].push_back(s);
//        v[s].push_back(f);
//    }
//    cout<<isBipartite(n,v);
//}