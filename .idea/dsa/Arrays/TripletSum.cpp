//#include "bits/stdc++.h"
//using namespace std;
//bool find3Numbers(int A[], int n, int X)
//{
//    //Your Code Here
//    sort(A,A+n);
//    for(int i=0;i<n-2;i++){
//        int l=i+1;
//        int r=n-1;
//        while(l<r){
//            if(A[i]+A[l]+A[r]==X){
//                return true;
//            }
//            else if(A[l]+A[r]+A[i]>X){
//                r--;
//            }
//            else{
//                l++;
//            }
//        }
//    }
//    return false;
//}
//int main(){
//    int arr[]={1,4,3,6,4,5,2,5,7,7,9,8,7,8,6,4,6};
//    int n=sizeof(arr)/sizeof(int);
//    int x=4;
//    cout<<find3Numbers(arr,n,x);
//}