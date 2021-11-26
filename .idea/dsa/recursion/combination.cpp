//#include "bits/stdc++.h"
//
//using namespace std;
//void solve(vector<int> &c,int t,vector<vector<int>> &ans,vector<int> &temp,int start){
//    if(t==0){
//        ans.push_back(temp);
//        return;
//    }
//    if(t<0){
//        return;
//    }
//    for(int i=start;i<c.size();i++){
//        if(i>start&&c[i]==c[i-1]) continue;
//        temp.push_back(c[i]);
//        solve(c,t-c[i],ans,temp,i+1);
//        temp.pop_back();
//    }
//}
//vector<vector<int>> combinationSum2(vector<int>& c, int t) {
//    vector<vector<int>> ans;
//    sort(c.begin(),c.end());
//    vector<int> temp;
//    solve(c,t,ans,temp,0);
//    return ans;
//}
//int main() {
//    vector<int> v = {10,1,2,7,6,1,5};
//    vector<vector<int>> ans= combinationSum2(v,8);
//}