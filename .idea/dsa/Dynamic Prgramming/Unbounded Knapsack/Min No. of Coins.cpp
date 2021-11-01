//#include "bits/stdc++.h"
//using namespace std;
//
//int minCoins(int V,int M,vector<int> coins){
//    vector<vector<int>> dp(M+1,vector<int>(V+1));
//    for(int i=0;i<=M;i++){
//        for(int j=0;j<=V;j++){
//
//            if(j==0){
//                dp[i][j]=0;
//            }
//            else if(i==0){
//                dp[i][j]=INT_MAX-1 ;
//            }
//            else if(j-coins[i-1]>=0){
//                dp[i][j]=min(dp[i][j-coins[i-1]]+1,dp[i-1][j]);
//
//            }
//            else{
//                dp[i][j]=dp[i-1][j];
//            }
//        }
//    }
//    return(dp[M][V]==INT_MAX-1?-1:dp[M][V]);
//}
//
//int main(){
//    int price=30,m=3;
//    vector<int> v={25,3,5};
//    int ans=minCoins(price,m,v);
//    cout<<ans<<endl;
//}
//
