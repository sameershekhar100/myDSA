//#include "bits/stdc++.h"
//using namespace std;
//bool dfs(vector<int> graph[],int sv,vector<int>& v,int color){
//    v[sv]=color;
//    color=(color+1)%2;
//    for(int i=0;i<graph[sv].size();i++){
//        int node=graph[sv][i];
//        if(v[node]==-1){
//            v[node]=color;
//            if(!dfs(graph,node,v,color))return 0;
//        }
//        else if(v[node]==v[sv]) return false;
//    }
//    return true;
//}
//bool isBipartite(vector<int> adj[],int n){
//    vector<int> v(n,-1);
//    for(int i=0;i<n;i++){
//        if(v[i]==-1){
//            if(!dfs(adj,i,v,0)) return false;
//        }
//    }
//    return true;
//}
//int main()
//{
//    int n,e;
//    cin>>n>>e;
//    vector<int> adj[n];
//    for (int i = 0; i < e; i++) {
//        int fv,sv;
//        cin>>fv>>sv;
//        adj[fv].push_back(sv);
//        adj[sv].push_back(fv);
//    }
//
//    cout<<isBipartite(adj,n);
//
//}