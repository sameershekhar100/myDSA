//#include "bits/stdc++.h"
//using namespace std;
//vector<long long int > solve(vector<long long int> arr,int n,int k){
//    vector<long long int > ans;
//    queue<long long int > queue;
//    int i=0;
//    while (i<k-1){
//        if(arr[i]<0){
//            queue.push(arr[i]);
//        }
//        i++;
//    }
//
//    i=0;
//    for ( i = k-1; i < n; ++i) {
//        if(arr[i]<0){
//            queue.push(arr[i]);
//        }
//        if(queue.empty()){
//            ans.push_back(0);
//        } else{
//            ans.push_back(queue.front());
//            if(arr[i-k+1]==queue.front())
//                queue.pop();
//
//        }
//
//    }
//    return ans;
//}
//int main(){
//    vector<long long int > arr={12,-1,-7,8,-15,30,16,28};
//    vector<long long int> ans=solve(arr,8,2);
//    for (int  i:ans) {
//cout<<i<<" ";
//    }
//}