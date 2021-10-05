//#include "bits/stdc++.h"
//using namespace std;
//bool isValid(int A[],int n,int m,int mid){
//    int student=1,sum=0;
//    for(int i=0;i<n;i++){
//        sum+=A[i];
//        if(sum>mid){
//            student++;
//            sum=A[i];
//        }
//        if(student>m){
//            return false;
//        }
//    }
//    return true;
//}
//int minPages(int A[],int N,int M){
//    if(N<M){
//        return -1;
//    }
//    //code here
//    int sum=0,m=-1,res=-1;
//    for(int i=0;i<N;i++){
//        sum+=A[i];
//        m=max(m,A[i]);
//    }
//    int s=m,e=sum;
//    while(s<=e){
//        int mid=s+(e-s)/2;
//
//        if(isValid(A,N,M,mid)){
//            res=mid;
//            e=mid-1;
//        }
//        else{
//            s=mid+1;
//        }
//    }
//    return res;
//}
//int main(){
//    int arr[]={10,20,30,40};
//    int k=3;
//    int ans= minPages(arr,int(sizeof (arr)/sizeof (int )),k);
//    cout<<ans;
//}