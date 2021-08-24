// KOSARAJU'S ALGORITHM
// this algo is used to find the strongly connected components

// step 1: take input in the form of adjacency list and form a tranpose graph by just reversing the edgess;
// step 2: apply for each node and add the node to the end in the stack after traversing through all of its nodes.
// step 3: now call a while loop for the filled stack and for each unvisited node call dfs with the transposed graph
// and marks all the connected component coming out from that dfs call is a strongly connected component. Similarly
//find all other connected components and store it in a set or vector.
//#include "bits/stdc++.h"
//
//using namespace std;
//
//void DFS(vector<int> edges[], stack<int> &finishedVertices, vector<bool> &isVisited, int curr) {
//    isVisited[curr] = true;
//    for (int i = 0; i < edges[curr].size(); i++) {
//        int next=edges[curr][i];
//        if (!isVisited[next]) {
//            DFS(edges, finishedVertices, isVisited, next);
//        }
//    }
//    finishedVertices.push(curr);
//}
//
//void DFS2(int element, vector<int> edgesT[], vector<bool> &isVisited, vector<int> &component) {
//    component.push_back(element);
//    isVisited[element] = true;
//    for (int i = 0; i < edgesT[element].size(); ++i) {
//        int next=edgesT[element][i];
//        if (!isVisited[next]) {
//            DFS2(next, edgesT, isVisited, component);
//        }
//    }
//}
//
//vector<vector<int>> Kosaraju(int n, vector<int> edges[], vector<int> edgesT[]) {
//    vector<bool> isVisited(n, false);
//    stack<int> finishedVertices;
//    for (int i = 0; i < n; i++) {
//        if (!isVisited[i]) {
//            DFS(edges, finishedVertices, isVisited, i);
//        }
//    }
//    for (auto i:isVisited) {
//        i = false;
//    }
//    vector<vector<int>> StronglyCC;
//    while (!finishedVertices.empty()) {
//        int element = finishedVertices.top();
//        finishedVertices.pop();
//        if (!isVisited[element]) {
//            vector<int> component;
//            DFS2(element, edgesT, isVisited, component);
//            StronglyCC.push_back(component);
//        }
//    }
//    return StronglyCC;
//
//}
//
//
//int main() {
//    int n, e;
//    cin >> n >> e;
//    vector<int> edges[n];
//    vector<int> edgesT[n];
//
//    for (int i = 0; i < e; i++) {
//        int f, s;
//        cin >> f >> s;
//        edges[f-1].push_back(s-1);
//        edgesT[s-1].push_back(f-1);
//    }
//    vector<vector<int>> ans = Kosaraju(n, edges, edgesT);
//    vector<vector<int>>::iterator it ;
//    for (it= ans.begin(); it != ans.end(); it++) {
//        vector<int> current = *it;
//        for (auto i:current) {
//            cout << i+1 << " ";
//        }
//        cout << endl;
//    }
//}

