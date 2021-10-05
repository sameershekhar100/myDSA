//#include "bits/stdc++.h"
//
//using namespace std;
//
//int unbounded(int n, int W, int val[], int wt[]) {
//    // code here
//    vector<vector<int>> v(n + 1, vector<int>(W + 1));
//    for (int i = 0; i <= n; i++) {
//        for (int j = 0; j <= W; j++) {
//            if (i == 0) {
//                v[i][j] = 0;
//            }
//            if (j == 0) {
//                v[i][j] = 0;
//            }
//        }
//    }
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= W; j++) {
//            if (j - wt[i - 1] >= 0)
//                v[i][j] = max(v[i - 1][j], val[i - 1] + v[i][j - wt[i - 1]]);
//            else
//                v[i][j] = v[i - 1][j];
//        }
//    }
//    return v[n][W];
//
//}
//
//int main() {
//    int n;
//    cin >> n;
//    int cost[n], weight[n];
//    for (int i = 0; i < n; ++i) {
//        cin >> cost[i];
//    }
//    for (int i = 0; i < n; i++) {
//        cin >> weight[i];
//    }
//    int k;
//    cin >> k;
//    int ans = unbounded(n, k, cost, weight);
//    cout << ans << endl;
//}