//#include "bits/stdc++.h"
//using namespace std;
//bool solve(string smallStr, string bigStr){
//    int m=bigStr.length(),n=smallStr.length();
//    vector<vector<int>> dp(m+1,vector<int>(n+1,0));
//    for (int i = 1; i <= m; ++i) {
//        for(int j=1;j<=n;j++){
//            if(bigStr[i - 1] == smallStr[j - 1]){
//                dp[i][j]=dp[i-1][j-1]+1;
//            }
//            else{
//                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
//            }
//        }
//    }
//    return dp[m][n] == min(m,n);
//
//}
//int main(){
//    string a="AXY",b="AOXCPY";
//
//    cout<<solve(a,b);
//}