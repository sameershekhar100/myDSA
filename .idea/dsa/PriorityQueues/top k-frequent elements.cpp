//#include "bits/stdc++.h"
//using namespace std;
//vector<int> topKFrequent(vector<int>& nums, int k) {
//    unordered_map<int,int> mp;
//    for(auto i:nums){
//        mp[i]++;
//    }
//    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
//    for(auto i:mp){
//        int val=i.first,freq=i.second;
//        if(pq.size()<k) pq.push({freq,val});
//        else{
//            if(freq>pq.top().first){
//                pq.pop();
//                pq.push({freq,val});
//            }
//        }
//    }
//    vector<int> ans;
//    while(!pq.empty()){
//        ans.push_back(pq.top().second);
//        pq.pop();
//    }
//    return ans;
//}
//int main(){
//    vector<int> v={1,1,1,1,2,2,3};
//    int k=2;
//    vector<int> ans=topKFrequent(v,k);
//    for(auto i:ans) cout<<i<<" ";
//}