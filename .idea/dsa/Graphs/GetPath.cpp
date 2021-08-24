//#include "bits/stdc++.h"
//
//using namespace std;
//
//vector<int> *getPathDFS(int **edges, int n, bool *isVisited, vector<int> *v, int a, int b) {
//    isVisited[a] = true;
//    bool check= false;
//    if (a == b) {
//        v->push_back(a);
//        return v;
//    }
//    for (int i = 0; i < n; i++) {
//        if (i == a)
//            continue;
//        if (edges[a][i] == 1 && !isVisited[i]) {
//            if (getPathDFS(edges, n, isVisited, v, i, b) != NULL) {
//                v->push_back(a);
//                check= true;
//            }
//            break;
//        }
//    }
//    if(check)
//    return v;
//    return NULL;
//}
//
//vector<int> *getPathBFS(int **edges, int n, bool *isVisited, vector<int> *v, int a, int b) {
//    isVisited[a]= true;
//bool check= false;
//    unordered_map<int,int> map;
//    if(a==b) {
//        v->push_back(a);
//        return v;
//    }
//    queue<int> queue;
//    queue.push(a);
//    map[a]=-1;
//    while (!queue.empty()){
//        int p=queue.front();
//        queue.pop();
//        for (int i = 0; i < n; ++i) {
//            if(i==p){
//                continue;
//            }
//            if(edges[p][i]==1&&!isVisited[i]){
//                queue.push(i);
//                isVisited[i]= true;
//                map[i]=p;
//                if(i==b){
//                    check= true;
//                    break;
//                }
//            }
//        }
//
//    }
//    if(check) {
//        for (int i = b; i != -1;) {
//            v->push_back(i);
//            i = map.at(i);
//        }
//
//        return v;
//    }
//    return NULL;
//
//}
//int main() {
//    int n, e;
//    cin >> n >> e;
//    int **edges = new int *[n];
//    for (int i = 0; i < n; i++) {
//        edges[i] = new int[n];
//        for (int j = 0; j < n; ++j) {
//            edges[i][j] = 0;
//        }
//    }
//
//    for (int i = 0; i < e; i++) {
//        int s, f;
//        cin >> s >> f;
//        edges[s][f] = 1;
//        edges[f][s] = 1;
//    }
//    int a, b;
//    cin >> a >> b;
//    bool *isVisited = new bool[n];
//    for (int i = 0; i < n; ++i) {
//        isVisited[i] = false;
//    }
//    vector<int> *v = new vector<int>;
//
//
//    //    vector<int> *v1 = getPathDFS(edges, n, isVisited, v, a, b);
//    vector<int> *v1 = getPathBFS(edges, n, isVisited, v, a, b);
//
//    if(v1!=NULL) {
//        for (vector<int>::iterator it = v->begin(); it != v->end(); ++it) {
//            cout << *it << " ";
//        }
//    } else
//        cout<<"Impossible"<<endl;
//    for (int i = 0; i < n; ++i) {
//        delete[] edges[i];
//    }
//    delete[] v1;
//    delete v;
//}