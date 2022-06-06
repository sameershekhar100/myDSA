//#include <bits/stdc++.h>
//#define mod 1000000007
//using namespace std;
//class Edge{
//public:
//    int src;
//    int des;
//    int weight;
//};
//bool cmp(Edge e1,Edge e2){
//    return e1.weight<e2.weight;
//}
//int findParent(int n,vector<int>& parent){
//    if(parent[n]==n){
//        return n;
//    }
//    return parent[n]=findParent(parent[n],parent);
//}
//void Union(int u,int v,vector<int>& parent,vector<int>& rank ){
//    u= findParent(u,parent);
//    v= findParent(v,parent);
//    if(rank[u]>rank[v])
//        parent[v]=u;
//    else if(rank[v]>rank[u])
//        parent[u]=v;
//    else{
//        parent[v]=u;
//        rank[u]++;
//    }
//}
//vector<Edge> Kruskals(vector<Edge> edges,int n,int e){
//    sort(edges.begin(),edges.end(),cmp);
//    vector<int> parent(n);
//    for (int i=0;i<n;i++)
//        parent[i]=i;
//    vector<int> rank(n,0);
//    vector<Edge> ans;
//    for(Edge it:edges){
//        if(findParent(it.src,parent)!=findParent(it.des,parent)){
//            Union(it.src,it.des,parent,rank);
//            ans.push_back(it);
//        }
//    }
//    return ans;
//}
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    int n,e;
//    cin>>n>>e;
//    vector<Edge> edges(e);
//    for(int i=0;i<e;i++){
//        int s,d,wt;
//        cin>>wt>>s>>d;
//        Edge node;
//        node.src=s-1;
//        node.des=d-1;
//        node.weight=wt;
//        edges[i]=node;
//    }
//    vector<Edge> output = Kruskals(edges, n, e);
//
//    for (int i = 0; i < n - 1; ++i) {
//        if (output[i].src > output[i].des) {
//            cout << output[i].des+1 << " " << output[i].src +1<< " " << output[i].weight << endl;
//        } else {
//            cout << output[i].src +1<< " " << output[i].des+1 << " " << output[i].weight << endl;
//        }
//    }
//    return 0;
//}
