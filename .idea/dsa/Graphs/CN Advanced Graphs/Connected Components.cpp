//#include "bits/stdc++.h"
//
//using namespace std;
//
//void getDFS(vector<int> *edges, int sv, bool *isVisited, unordered_set<int> *v1) {
//    v1->insert(sv);
//    isVisited[sv] = true;
//    for (int i = 0; i < edges[sv].size(); ++i) {
//        int next=edges[sv][i];
//        if (!isVisited[next]) {
//            getDFS(edges, next, isVisited, v1);
//        }
//    }
//}
//
//unordered_set<unordered_set<int> *> *DFS(vector<int> *edges, int n) {
//    bool *isVisited = new bool[n];
//
//    for (int i = 0; i < n; i++) {
//        isVisited[i] = false;
//    }
//    unordered_set<unordered_set<int> *> *output = new unordered_set<unordered_set<int> *>();
//    for (int i = 0; i < n; ++i) {
//        if (!isVisited[i]) {
//            unordered_set<int> *component = new unordered_set<int>();
//            getDFS(edges, i, isVisited, component);
//            output->insert(component);
//        }
//    }
//    delete[] isVisited;
//    return output;
//
//}
//
//int main() {
//    int n, e;
//    cin >> n >> e;
//    vector<int> *edges = new vector<int>[n];
//
//    for (int i = 0; i < e; i++) {
//        int f, s;
//        cin >> f >> s;
//        edges[f - 1].push_back(s - 1);
//        edges[s - 1].push_back(f - 1);
//    }
//
//    unordered_set<unordered_set<int> *> *components = DFS(edges, n);
//    unordered_set<unordered_set<int> *>::iterator it = components->begin();
//    while (it != components->end()) {
//        unordered_set<int> *current = *it;
//        unordered_set<int>::iterator it2 = current->begin();
//        while (it2 != current->end()) {
//            cout << *it2 + 1 << " ";
//            it2++;
//        }
//        it++;
//        delete current;
//        cout << endl;
//
//    }
//    delete[] edges;
//    delete components;
//}
