//#include "bits/stdc++.h"
//
//using namespace std;
//
//vector<int> removeDuplicates(int* a,int size){
//    vector<int> v;
//    unordered_map<int,bool> map;
//    for(int i=0;i<size;i++){
//        if(map.count(a[i])){
//            continue;
//        }
//        map[a[i]]= true;
//        v.push_back(a[i]);
//    }
//    return v;
//}
//int main(){
//
//    int arr[]={1,2,3,3,2,1,4,5,6,3,6,7};
//    vector<int> v= removeDuplicates(arr,sizeof (arr)/sizeof (int));
//    for(int i:v){
//        cout<<i<<" ";
//    }
//}