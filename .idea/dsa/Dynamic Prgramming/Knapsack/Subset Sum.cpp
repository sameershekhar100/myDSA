//#include <bits/stdc++.h>
//#define mod 1000000007
//#define ull unsigned long long
//using namespace std;
//
//int solve(vector<int> v,int sum){
//    int n=v.size();
//    int dp[v.size()+1][sum+1];
//    for(int i=0;i<=n;i++){
//        for(int j=0;j<=sum;j++){
//            if(i==0){
//                dp[i][j]=0;
//            }
//            if(j==0){
//                dp[i][j]=1;
//            }
//        }
//    }
//
//    for (int i = 1; i <= n; ++i) {
//        for(int j=1;j<=sum;j++){
//            if(j-v[i-1]>=0){
//                dp[i][j]=dp[i-1][j-v[i-1]]+dp[i-1][j];
//            }
//            else{
//                dp[i][j]=dp[i-1][j];
//            }
//        }
//    }
//    return dp[n][sum];
//}
//
//int main(){
//    int arr[] ={1,3,5};
//
//}