//#include "bits/stdc++.h"
//using namespace std;
//bool check(string& s,int i,int j){
//    while(i<j){
//        if(s[i]!=s[j]) return false;
//        i++;j--;
//    }
//    return true;
//}
//int solve (string& s,int i,int j,vector<vector<int>>& dp){
//
//    if(i>=j){
//        return 0;
//    }
//    if(dp[i][j]!=-1){
//        return dp[i][j];
//    }
//    //check weather the string is palindrome or not
//    if(check(s,i,j)){
//        return dp[i][j]=0;
//    }
//    int res=INT_MAX;
//    for(int k=i;k<j;k++){
//        //here we find the total partitions by slicing the strring at each idx and find add +1 du to that slice and find
//        //the minimum of amt of slices.
//        int ans=solve(s,i,k,dp)+solve(s,k+1,j,dp)+1;
//        res=min(ans,res);
//    }
//    dp[i][j]=res;
//    return res;
//}
//int palindromicPartition(string str)
//{
//    // code here
//    int n=str.length();
//    vector<vector<int>> dp(501,vector<int>(501,-1));
//    return solve(str,0,n-1,dp);
//}
//int main(){
//    string s="dbcba";
//    int ans= palindromicPartition(s);
//    cout<<ans;
//}