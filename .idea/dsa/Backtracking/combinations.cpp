//#include "bits/stdc++.h"
//
//using namespace std;
//
//void solve(int n, int k, vector<vector<int>> &ans, vector<int> &t,int s) {
//    if (k == 0) {
//        ans.push_back(t);
//        return;
//    }
//
//    for (int i = s; i <= n; i++) {
//        t[k-1] = i;
//        solve(n, k - 1, ans, t,i+1);
//    }
//}
//
//vector<vector<int>> combine(int n, int k) {
//    vector<vector<int>> ans;
//    vector<int> t(k);
//    solve(n, k, ans, t,1);
//    return ans;
//}
//
//int main() {
//    int n=4, k=2;
////    cin >> n >> k;
//    vector<vector<int>> ans = combine(n, k);
//    for (auto i:ans) {
//        for (auto j:i) {
//            cout << j << " ";
//        }
//        cout << endl;
//    }
//}