//#include "bits/stdc++.h"
//using namespace std;
//
//set<int> solve(int *, int , int *, int );
//
//int main(){
//    int arr1[]={10,10};
//    int arr2[]={10,10};
//    set<int> v=solve(arr1,sizeof (arr1)/sizeof (int),arr2,sizeof (arr2)/sizeof (int));
//    for(int i:v){
//        cout<<i<<" ";
//    }
//}
//
//set<int> solve(int *arr1, int n1, int *arr2, int n2) {
//    set<int> v;
//    unordered_map<int,int> map;
//    for(int i=0;i<n1;i++){
//        map[arr1[i]]=1;
//    }
//    for(int i=0;i<n2;i++){
//        if(map.count(arr2[i])){
//
//            v.insert(arr2[i]);
//        }
//
//    }
//    return v;
//}
