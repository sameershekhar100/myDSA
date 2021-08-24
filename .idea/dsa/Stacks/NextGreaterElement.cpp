//#include "bits/stdc++.h"
//using namespace std;
//
//vector<long long> solve(vector<long long> arr, int n){
//    // Your code here
//
//    vector<long long> v;
//    v.push_back(-1);
//    stack<long long> s;
//    s.push(arr[n-1]);
//    for(int i =n-2;i>=0;i--){
//        if(arr[i]<s.top()){
//           long long p=s.top();
//            v.push_back(p);
//            s.push(arr[i]);
//        }
//        else{
//            while(!s.empty()){
//                if(s.top()>=arr[i]){
//                    long long temp=s.top();
//                    v.push_back(s.top());
//
//                    s.push(arr[i]);
//                    break;
//                }
//                s.pop();
//            }
//            if(s.empty()){
//                v.push_back(-1);
//                s.push(arr[i]);
//            }
//        }
//    }
//    reverse(v.begin(),v.end());
//    return v;
//}
//
//int main(){
//int n;
////    cin>>n;
//    vector<long long > arr;
//    arr.push_back(1);
//    arr.push_back(3);
//    arr.push_back(2);
//    arr.push_back(5);
////    for(int i=0;i<n;i++){
////        long long t;
////        cin>>t;
////        arr.push_back(t);
////    }
//    vector<long long > res= solve(arr,4);
//    for(long i:res){
//        cout<<i<<" ";
//    }
//
//    return 0;
//}