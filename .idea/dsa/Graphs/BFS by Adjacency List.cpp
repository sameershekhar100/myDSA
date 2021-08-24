//#include "bits/stdc++.h"
//
//using namespace std;
//
//void bfs(int sv,int V,vector<int> &v,vector<int> adj[],vector<bool> &isVisited){
//    queue<int> q;
//    q.push(sv);
//    isVisited[sv]=true;
//
//    while(!q.empty()){
//        int p=q.front();
//        v.push_back(p);
//        q.pop();
//        for(int item:adj[p]){
//            if(!isVisited[item]){
//                q.push(item);
//                isVisited[item]=true;
//            }
//        }
//    }
//}
//vector<int>getBFS(int V, vector<int> adj[])
//{
//    // Code here
//    vector<int> v;
//    vector<bool>isVisited(V,false);
//    bfs(0,V,v,adj,isVisited);
//
//    return v;
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
//    vector<int> solution = getBFS(v, edges);
//    for (int i:solution) {
//        cout << i << " ";
//    }
//    return 0;
//}