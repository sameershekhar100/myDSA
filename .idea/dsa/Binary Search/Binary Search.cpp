//#include "bits/stdc++.h"
//using namespace std;
//int main(){
//    int arr[]={1,2,3,4,5,7};
//    int N=6;
//    int K=5;
//    bool ans=false;
//    //binary search
//    cout<<lower_bound(arr,arr+N,K);
//    int start=0,end=N-1;
//    while(start<=end){
//        int mid=(start+end)/2;
//        if(arr[mid]==K){
//            ans= 1;
//            break;
//        }
//        else if(arr[mid]>K){
//            end=mid-1;
//            continue;
//        }
//        else{
//            start=mid+1;
//        }
//    }
////    cout<<(ans?1:-1);
//}