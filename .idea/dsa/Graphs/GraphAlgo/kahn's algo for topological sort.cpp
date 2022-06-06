//#include "bits/stdc++.h"
//using namespace std;
//
//vector<int> topoSort(int n,vector<int> adj[]){
//    vector<int> inDegree(n);
//    vector<int> ans;
//    queue<int> q;
//    for(int i=0;i<n;i++){
//        for(auto j:adj[i]){
//            inDegree[j]++;
//        }
//    }
//    for(auto i=0;i<inDegree.size();i++){
//        if(inDegree[i]==0){
//            q.push(i);
//        }
//    }
//    while(!q.empty()){
//        int node=q.front();
//        q.pop();
//        ans.push_back(node);
//        for(int i:adj[node]){
//            inDegree[i]--;
//            if(inDegree[i]==0)q.push(i);
//        }
//    }
//    return ans;
//}
//int main() {
//    int T;
//    cin >> T;
//    while (T--) {
//        int N, E;
//        cin >> E >> N;
//        int u, v;
//        vector<int> adj[N];
//        for (int i = 0; i < E; i++) {
//            cin >> u >> v;
//            adj[u].push_back(v);
//        }
//        vector<int> ans=topoSort(N,adj);
//        for(int i:ans){
//            cout<<i<<endl;
//        }
//    }
//
//}