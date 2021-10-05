//#include "bits/stdc++.h"
//using namespace std;
//int solve(vector<int>& nums){
//    vector<int> bucket(10001,0);
//    for(int i:nums){
//        bucket[i]+=i;
//    }
//    int dp[10001];
//    dp[0]=bucket[0];
//    dp[1]=bucket[1];
//    for(int i=2;i<10001;i++){
//        dp[i]=max(dp[i-1],dp[i-2]+bucket[i]);
//    }
//
//    return dp[10000];
//}
//int main(){
//    vector<int> v={2,2,3,3,3,4};
//    int ans =solve(v);
//    cout<<ans<<endl;
//}
