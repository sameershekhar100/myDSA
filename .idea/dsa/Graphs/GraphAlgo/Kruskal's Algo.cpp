//#include "bits/stdc++.h"
//
//using namespace std;
//
//class Edge {
//public:
//    int src;
//    int des;
//    int weight;
//
//};
//
//bool compare(Edge e1, Edge e2) {
//    return e1.weight < e2.weight;
//}
//
//int getParent(int vertex, int *parent) {
//    if (parent[vertex] == vertex){
//        return vertex;
//    }
//    return getParent(parent[vertex], parent);
//}
//
//Edge *Kruskals(Edge *edge, int n, int e) {
//    //1 sort the edge in increasing order
//    sort(edge, edge + e, compare);
//    //for union find algo to check cyclicity
//    int *parent = new int[n];
//    Edge *output = new Edge[n - 1]; //MST should be a tree with n vertices and n-1 edges
//    for (int i = 0; i < n; ++i) {
//        parent[i] = i;
//    }
//
//    int count = 0;
//    int i = 0;
//    while (count < (n - 1)) {
//        Edge currEdge = edge[i];
//        int srcParent = getParent(currEdge.src, parent);
//        int desParent = getParent(currEdge.des, parent);
//        if (parent[srcParent] != parent[desParent]) {
//            output[count] = currEdge;
//            count++;
//            parent[srcParent] = desParent;
//        }
//        i++;
//    }
//    return output;
//}
//
//int main() {
//    int n, e;
//    cin >> n >> e;
//    Edge *edges = new Edge[e];
//    for (int i = 0; i < e; i++) {
//        int v1, v2, weight;
//        cin >> v1 >> v2 >> weight;
//        edges[i].src = v1;
//        edges[i].des = v2;
//        edges[i].weight = weight;
//    }
//    Edge *output = Kruskals(edges, n, e);
//
//    for (int i = 0; i < n - 1; ++i) {
//        if (output[i].src > output[i].des) {
//            cout << output[i].des << " " << output[i].src << " " << output[i].weight << endl;
//        } else {
//            cout << output[i].src << " " << output[i].des << " " << output[i].weight << endl;
//        }
//    }
//}