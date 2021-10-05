//#include "bits/stdc++.h"
//
//using namespace std;
//
//string solve(string s) {
//    string b = s;
//    int n = s.length();
//    reverse(s.begin(), s.end());
//    vector<vector<int>> dp(n, vector<int>(n, 0));
//    //dp[i][j] represents the the size of the palindromic substring from substring(i to j). For that it just checks
//    // the starting char(s[i])==s[j],the ending char is equal and the chars inside i and j. this is checked by checking
//    // if dp[i+1][j-1] cuz it denotes the substring inside i and j
//    for (int k = 0; k < n; k++) {
//        for (int gap = k,i=0; gap < n; gap++,i++) {
//            if (i == gap) {
//                dp[i][gap] = 1;
//                continue;
//            } else {
//                if (b[i] == b[gap]) {
//                    if (gap - i > 1 && dp[i + 1][gap - 1] > 0) {
//                        dp[i][gap] = 2 + dp[i + 1][gap - 1];
////                    } else if(end-start==1) {
//                        dp[i][gap] = 2;
//                    }
//                }
//            }
//        }
//    }
//    string ans = "";
//    int res = 0;
//    pair<int, int> range;
//    for (int i = 0; i < n; i++) {
//        for (int j = i; j < n; j++) {
//            if (res < dp[i][j]) {
//                res = dp[i][j];
//                range = {i, j};
//            }
//        }
//    }
//    int start = range.first, end = range.second;
////    cout << res << start << end;
//
//    ans = b.substr(start, end - start + 1);
//
//    return ans;
//}
//
//int main() {
//    string s="aacabdkacaa";
//
//    cout << solve(s);
//}