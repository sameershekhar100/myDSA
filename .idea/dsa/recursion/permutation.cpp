//#include "bits/stdc++.h"
//
//using namespace std;
//
//void solve(vector<int> nums,int k,vector<vector<int>> &ans,vector<int> &temp,vector<bool>& vis){
//    if(k==nums.size()){
//        ans.push_back(temp);
//        return;
//    }
//    for(int i=0;i<nums.size();i++){
//        if(vis[i]) continue;
//        if(i>0&&nums[i-1]==nums[i]&&!vis[i-1]) continue;
//        if(temp[k]==INT_MAX){
//            temp[k]=nums[i];
//            vis[i]=1;
//            solve(nums,k+1,ans,temp,vis);
//            //backtrack
//            temp[k]=INT_MAX;
//            vis[i]=0;
//        }
//    }
//}
//vector<vector<int>> permuteUnique(vector<int>& nums) {
//    vector<vector<int>> ans;
//    vector<bool> vis(nums.size(),0);
//    sort(nums.begin(),nums.end());
//    vector<int> temp(nums.size(),INT_MAX);
//    solve(nums,0,ans,temp,vis);
//    return ans;
//}
//int main() {
//    vector<int> v = {1,1,2};
//    vector<vector<int>> ans = permuteUnique(v);
//    vector<vector<int>>::iterator it;
//    for (it = ans.begin(); it < ans.end(); it++) {
//        for (auto j = it->begin(); j < it->end(); j++) {
//            cout << *j << " ";
//        }
//        cout << endl;
//    }
//}