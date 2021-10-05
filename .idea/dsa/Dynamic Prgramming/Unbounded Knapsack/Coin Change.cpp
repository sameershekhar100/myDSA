//#include "bits/stdc++.h"
//
//using namespace std;
//
//int ways(int price, int m, vector<int> arr) {
//    vector<vector<int>> dp(m+1,vector<int>(price+1));
//    for(int i=0;i<=m;i++){
//        for(int j=0;j<=price;j++){
//            if(i==0){
//                dp[0][j]=0;
//            }
//            if(j==0){
//                dp[i][0]=1;
//            }
//        }
//    }
//    for (int i = 1; i <= m;++i) {
//        for (int j = 1; j <=price; ++j) {
//            if(j-arr[i-1]>=0){
//                dp[i][j]=dp[i][j-arr[i-1]]+dp[i-1][j];
//            }
//            else{
//                dp[i][j]=dp[i-1][j];
//            }
//        }
//    }
//    return dp[m][price];
//}
//
////efficient approach
//long long int count(int n, int m, vector<int> S) {
//
//    // code here.
//    vector<long long int> dp(n+1,0);
//    dp[0]=1;
//
//    for(int i=0;i<m;i++){
//        for(int j=0;j<=n;j++){
//            if(j-S[i]>=0){
//                dp[j]=dp[j]+dp[j-S[i]];
//            }
//
//        }
//    }
//    return dp[n];
//}
//int main(){
//
//
//    int price=10,m=4;
////    cin>>price>>m;
//    vector<int> v={2,5,3,6};
////    for(int i=0;i<m;i++){
////        cin>>v[i];
////    }
//    int ans=ways(price,m,v);
//    cout<<ans<<endl;
//}
//
