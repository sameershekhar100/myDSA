//#include "bits/stdc++.h"
//using namespace std;
//void helper(vector<int>&v ,int i,int j){
//    while(i<j) {
//        swap(v[i], v[j]);
//        i++;
//        j--;
//    }
//}
//void rotateArray(vector<int>&v,int k){
//    int n=v.size();
//    k=k%n;
//    helper(v,0,n-k-1);
//    helper(v,n-k,n-1);
//    helper(v,0,n-1);
//}
//
//int main(){
//    vector<int> v={1,2,3,4,5,6,7};
//    rotateArray(v,3);
//    for (int i = 0; i < v.size(); ++i) {
//        cout<<v[i]<<" ";
//    }
//}
//
