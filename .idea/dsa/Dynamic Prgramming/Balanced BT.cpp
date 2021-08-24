///*
//Given an integer h, find the possible number of balanced binary trees of height h. You just need to return the
//count of possible binary trees which are balanced. This number can be huge, so return output modulus 10^9 + 7.
// */
//#include "bits/stdc++.h"
//using namespace std;
//int mod=1000000007;
//long long  solve(long long *arr,int h){
//    if (h==1){
//        return 1;
//    }
//    if(h==2){
//        return 3;
//    }
//    if(arr[h]!=0){
//        return arr[h];
//    }
//    long long h1=solve(arr,h-1)%mod;
//    long long h2=solve(arr,h-2)%mod;
//    long long c=(((h1*h1)%mod)+((2*h2*h1)%mod))%mod;
//    arr[h]=c;
//    return arr[h];
//}
//long long int countBT(int h) {
//    // code here
//    long long* arr=new long long [h+1];
//    for(int i=0;i<=h;i++){
//        arr[i]=0;
//    }
//
//    return  solve(arr,h);
//}
//int countBT1(int h){
//    vector<long long int> v(h+1,0);
//    v[0]=0;
//    v[1]=1;
//    v[2]=3;
//    if(h>2) {
//        for (int i = 3; i <= h; ++i) {
//            long long int c = (((v[i - 1] * v[i - 1]) % mod) +
//                               ((2 * v[i - 2] * v[i - 1]) % mod)) % mod;
//            v[i] = c;
//        }
//    }
//    return v[h];
//}
//int main(){
//    int n;
//    cin>>n;
//    cout<<countBT1(n);
//}