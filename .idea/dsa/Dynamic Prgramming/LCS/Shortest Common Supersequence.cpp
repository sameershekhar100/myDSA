//#include "bits/stdc++.h"
//
//using namespace std;
//
//pair<string, int> solve(string s1, string s2) {
//    int m = s1.length(), n = s2.length();
//    //simply find LCS of both strings
//    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
//    for (int i = 1; i <= m; i++) {
//        for (int j = 1; j <= n; j++) {
//            if (s1[i - 1] == s2[j - 1]) {
//                dp[i][j] = dp[i - 1][j - 1] + 1;
//            } else {
//                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//            }
//        }
//    }
//    //length of SCS
//    int res = m + n - dp[m][n];
//    string ans = "";
//    while (m > 0 && n > 0) {
//        //if at a certain cell if both string has same char at i & j
//        if (s1[m - 1] == s2[n - 1]) {
//            ans += s1[m - 1];
//            m--;
//            n--;
//        }
//        //if we shift to the greater side we must add the char of that row/col which is to be shifted
//        else if (dp[m][n - 1] > dp[m - 1][n]) {
//            ans += s2[n - 1];
//            n--;
//        } else {
//            ans += s1[m - 1];
//            m--;
//        }
//    }
//    //lastly if we reach to the any end side of the matrix ,we should add the remaining chars of
//    // the nonzero index of the matrix and make it to 0,0
//    while (m != 0) {
//        ans += s1[m - 1];
//        m--;
//    }
//    while (n != 0) {
//        ans += s2[n - 1];
//        n--;
//    }
//
//    //lastly reverse the formed string to get the required answer
//    reverse(ans.begin(), ans.end());
//    return {ans, res};
//}
//
//int main() {
//    string s1 = "bbbaaaba", s2 = "bbababbb";
//
//    pair<string, int> ans = solve(s1, s2);
//    cout << ans.first << " " << ans.second;
//}