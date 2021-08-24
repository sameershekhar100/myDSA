//#include "bits/stdc++.h"
//
//using namespace std;
//
//int calculate(int m, int k, int* cost, int* weight, vector<vector<int>> &v){
//    if(m==-1){
//        return 0;
//    }
//    if(v[m][k]!=-1){
//        return v[m][k];
//    }
//    int ans;
//    if(weight[m] > k){
//        ans= calculate(m-1, k, cost, weight, v);
//
//    }
//    else {
//        int option1 = calculate( m - 1, k - weight[m], cost, weight, v) + cost[m];
//        int option2 = calculate( m - 1, k, cost, weight, v);
//        ans = max(option1, option2);
//    }
//    v[m][k]=ans;
//    return ans;
//}
//int knapSnack(int n,int k, int *cost, int *weight) {
//    vector<vector<int>> v(n,vector<int>(k+1,-1));
//    return calculate(n-1,k,cost,weight,v);
//}
//int knapSnack1(int n,int k, int *cost, int *weight){
//    vector<vector<int>> dp(n+1,vector<int> (k+1,0)) ;
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 0; j <= k; ++j) {
//            dp[i][j]=dp[i-1][j];
//            if(weight[i-1]<=j){
//                dp[i][j]=max(dp[i][j],cost[i-1]+dp[i-1][j-weight[i-1]]);
//            }
//        }
//    }
//    return dp[n][k];
//}
//int main() {
//    int n;
//    cin >> n;
//    int cost[n], weight[n];
//    for (int i = 0; i < n; i++) {
//        cin >> weight[i];
//    }
//    for (int i = 0; i < n; ++i) {
//        cin >> cost[i];
//    }
//    int k;
//    cin >> k;
//    int ans = knapSnack1(n,k, cost, weight);
//    cout << ans << endl;
//}