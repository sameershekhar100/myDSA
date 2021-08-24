//#include "bits/stdc++.h"
//using namespace std;
//class Edge{
//public:
//    int first;
//    int second;
//    int weight;
//};
//class cmp{
//public:
//    int operator()(const Edge& e1,const Edge& e2) {
//        return e1.weight > e2.weight;
//    }
//};
//void prims(int n,vector<vector<int>> adj[]){
//    vector<bool> isVisited(n,false);
////    priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
//    priority_queue<Edge,vector<Edge>,cmp> pq;
//    Edge edge;
//    edge.first=0;
//    edge.second=0;
//    edge.weight=0;
//    pq.push(edge);
//    vector<Edge> v(n);
//
//    int parent=-1;
//    while(!pq.empty()){
//
//        Edge node=pq.top();
//        pq.pop();
//        int curr_vertex = node.first;
//        int parent_vertex = node.second;
//        int curr_weight = node.weight;
//        if(!isVisited[curr_vertex]){
//            isVisited[curr_vertex]=true;
//            Edge ans;
//            ans.first=curr_vertex;
//            ans.second=parent_vertex;
//            ans.weight=curr_weight;
//            if(parent!=-1)
//            v[curr_vertex]=ans;
//            parent=curr_vertex;
//            for (int i = 0; i < adj[curr_vertex].size(); ++i) {
//                Edge e;
//                e.first=adj[curr_vertex][i][0];
//                e.second=curr_vertex;
//                e.weight=adj[curr_vertex][i][1];
//                pq.push(e);
//            }
//        }
//    }
//    for (int i = 1; i < n; ++i) {
//        if(v[i].second<v[i].first)
//        cout<<v[i].second<<" "<<v[i].first<<" "<<v[i].weight<<endl;
//        else
//            cout<<v[i].first<<" "<<v[i].second<<" "<<v[i].weight<<endl;
//    }
//}
//int main(){
//    int n,e;
//    cin>>n>>e;
//    vector<vector<int>> adj[n];
//    while (e--){
//        int sv,fv,weight;
//        cin>>sv>>fv>>weight;
//        adj[sv].push_back({fv,weight});
//        adj[fv].push_back({sv,weight});
//    }
//    prims(n,adj);
//}
////  5 6
////  1 2 2
////  1 4 8
////  2 3 8
////  3 4 6
////  0 4 12
////  0 3 10
