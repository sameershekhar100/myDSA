//#include "bits/stdc++.h"
//using namespace std;
////put the node in recursion stack and call DFS and check that any neighbour is visited earlier or not
////if it is visited return true else remove the curretn edge from the stack and return false;
////check this with all edges and if any edge contains cycle return true else return false
//bool CheckCycle(vector<int> adj[],bool isVisted[],bool recS[],int i)
//{
//    isVisted[i]= true;
//    recS[i]= true;
//    for(int j:adj[i]){
//        if(!isVisted[j]){
//            if(CheckCycle(adj,isVisted,recS,j)){
//                return true;
//            }
//            }
//        else if(recS[j]){
//            return true;
//        }
//    }
//    recS[i]= false;
//    return false;
//}
//bool isCyclic(vector<int> adj[],int V){
//    bool isVisited[V],recS[V];
//    for (int i = 0; i < V; ++i) {
//        isVisited[i]= false;
//        recS[i]= false;
//    }
//    for(int i=0;i<V;i++ ){
//        if(!isVisited[i]){
//            if(CheckCycle(adj,isVisited,recS,i)){
//                return true;
//            }
//        }
//    }
//    return false;
//}
//int main(){
//    int V,E;
//    cin>>V>>E;
//    vector<int> edges[V];
//    for(int i=0;i<E;i++){
//        int fv,sv;
//        cin>>fv>>sv;
//        edges[fv].push_back(sv);
//    }
//    cout<<isCyclic(edges,V);
//}