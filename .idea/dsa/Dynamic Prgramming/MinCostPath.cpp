//#include "bits/stdc++.h"
//
//using namespace std;
//
//int calculate(int n, int m, int x, int y, vector<vector<int>> matrix, vector<vector<int>> dp) {
//    if (x == n - 1 && y == m - 1) {
//        return matrix[x][y];
//    }
//    int ans = INT32_MAX;
//    if (x < n && y < m) {
//        if(dp[x][y]!=-1){
//            return dp[x][y];
//        }
//        int a = calculate(n, m, x + 1, y + 1, matrix, dp );
//        int b = calculate(n, m, x + 1, y, matrix, dp );
//        int c = calculate(n, m, x, y + 1, matrix, dp );
//        ans = min(a, min(b, c))+ matrix[x][y];
//        dp[x][y]=ans;
//    }
//
//    return ans;
//}
//
//int minCost(int n, int m, vector<vector<int>> matrix) {
//    vector<vector<int>> dp(n,vector<int>(m,-1));
//    return calculate(n, m, 0, 0, matrix, dp);
//}
//int minCost1(int n, int m, vector<vector<int>> matrix) {
//    vector<vector<int>> dp(n,vector<int>(m,0));
//    dp[0][0]=matrix[0][0];
//    for (int i = 1; i < n; ++i) {
//        dp[i][0]=dp[i-1][0]+matrix[i][0];
//    }
//    for (int i = 1; i < m; ++i) {
//        dp[0][i]=dp[0][i-1]+matrix[0][i];
//    }
//    for (int i = 1; i < n; ++i) {
//        for (int j = 1; j < m; ++j) {
//            dp[i][j]= min(dp[i-1][j], min(dp[i][j-1],dp[i-1][j-1]))+matrix[i][j];
//        }
//    }
//    return dp[n-1][m-1];
//}
//int main() {
//    int n, m;
//    cin >> n >> m;
//    vector<vector<int>> matrix(n, vector<int>(m));
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            cin >> matrix[i][j];
//        }
//    }
//    int ans = minCost1(n, m, matrix);
//    cout << ans;
//}