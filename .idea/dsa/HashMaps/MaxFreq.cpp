//#include "bits/stdc++.h"
//using namespace std;
//
//int maxfreq(int* arr,int size){
//    int res=0,ans=0;
//    unordered_map<int ,int> map;
//    for(int i=0;i<size;i++){
//        if(map.count(arr[i])==0){
//            map[arr[i]]=1;
//            if(res==0){
//                res=1;
//                ans=arr[i];
//            }
//            continue;
//
//        }
//        map[arr[i]]+=1;
//        if(map[arr[i]]>res){
//            res=map[arr[i]];
//            ans=arr[i];
//        }
//
//    }
//    return ans;
//}
//
//int main(){
//
//    int arr[]={2 ,12 ,2 ,11 ,12 ,2 ,1 ,2 ,2 ,11 ,12 ,2 ,6};
//    int arr1[]={1,4,5};
//  int  v= maxfreq(arr1,sizeof (arr1)/sizeof (int));
//
//        cout<<v<<" ";
//
//}