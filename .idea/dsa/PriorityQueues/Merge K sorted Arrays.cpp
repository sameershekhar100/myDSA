//#include "bits/stdc++.h"
//
//using namespace std;
//
//class triplet {
//public:
//    int value, row, valueidx;
//
//};
//
//class cmp {
//public:
//    bool operator()(triplet &t1, triplet &t2) {
//        return t1.value > t2.value;
//    }
//};
//
//vector<int> mergeKArrays(vector<vector<int>> arr, int K) {
//    //code here
//
//    priority_queue<triplet, vector<triplet>, cmp> pq;
//    vector<int> ans;
//    for (int i = 0; i < K; i++) {
//        pq.push({arr[i][0], i, 0});
//    }
//    while (!pq.empty()) {
//        triplet n = pq.top();
//        pq.pop();
//        int row = n.row;
//        int idx = n.valueidx;
//        ans.push_back(n.value);
//        if (idx + 1 < K) {
//            triplet t;
//            t.value = arr[row][idx + 1];
//            t.row = row;
//            t.valueidx = idx + 1;
//            pq.push(t);
//        }
//    }
//
//
//    return ans;
//
//}
//
//int main() {
//    int K = 3;
//    vector<vector<int>> arr(K, vector<int>(K));
//    arr = {{1, 2, 3, 4},
//           {2, 2, 3, 4},
//           {5, 5, 6, 6},
//           {7, 8, 9, 9}};
//    auto v = mergeKArrays(arr, K);
//    for (int i = 0; i < v.size(); ++i) {
//        cout << v[i] << " ";
//    }
//}