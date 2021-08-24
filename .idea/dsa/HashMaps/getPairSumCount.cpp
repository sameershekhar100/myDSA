//#include "bits/stdc++.h"
//
//using namespace std;
//
//int solve(int arr[],int n,int k){
//    int res=0;
//    unordered_map<int,int> map;
//    for(int i=0;i<n;i++){
//        map[arr[i]]++;
//    }
//    for(int i=0;i<n;i++){
//        if(map.find(k-arr[i])!=map.end()){
//            if(arr[i]==k-arr[i]){
//                res+=map[k-arr[i]]-1;
//                continue;
//            }
//            res+=map[k-arr[i]];
//        }
//    }
//    return res/2;
//}
//int main(){
//    int arr[]={1,1,1,1};
//    cout<<solve(arr,4,2);
//}