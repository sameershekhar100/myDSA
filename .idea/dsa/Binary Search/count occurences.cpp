//#include "bits/stdc++.h"
//using namespace std;
//int countocc(int arr[],int n,int x){
//    int c1=-1,c2=-1;
//    int start=0,end=n-1;
//    while(start<=end){
//        int mid=start+(end-start)/2;
//        if(arr[mid]==x){
//            c1=mid;
//            end=mid-1;
//        }
//        else if(arr[mid]>x){
//            end=mid-1;
//        }
//        else{
//            start=mid+1;
//        }
//    }
//
//    start=0;
//    end=n-1;
//    while(start<=end){
//        int mid=start+(end-start)/2;
//        if(arr[mid]==x){
//            c2=mid;
//            start=mid+1;
//        }
//        else if(arr[mid]>x){
//            end=mid-1;
//        }
//        else{
//            start=mid+1;
//        }
//    }
//    if(c2==-1){
//        return 0;
//    }
//    return c2-c1+1;
//}
//int main(){
//    int n=7;
//    int x=10;
//    int arr[]={2,4,10,10,10,18,20};
//
//    int ans=countocc(arr,n,x);
//    cout<<ans<<endl;
//}