//#include "bits/stdc++.h"
//using namespace std;
//vector<int> fun1(long long arr[],int n) {
//    vector<int> v;
//    stack<pair<long long, int>> s;
//    v.push_back(-1);
//    s.push({arr[0], 0});
//    for (int i = 1; i < n; i++) {
//        int a = arr[i];
//        while (!s.empty() && s.top().first >= a) {
//            s.pop();
//        }
//        if (s.empty()) {
//            v.push_back(-1);
//        } else {
//            v.push_back(s.top().second);
//        }
//        s.push({arr[i], i});
//    }
//    return v;
//}
//vector<int> fun2(long long arr[],int n){
//    vector<int> v;
//    stack<pair<long long,int>> s;
//    v.push_back(n);
//    s.push({arr[n-1],n-1});
//    for(int i=n-2;i>=0;i++){
//        long long a =arr[i];
//        while(!s.empty()&&s.top().first>=a){
//            s.pop();
//        }
//        if(s.empty()){
//            v.push_back(n);
//        }
//        else{
//            v.push_back(s.top().second);
//        }
//        s.push({arr[i],i});
//    }
//    reverse(v.begin(),v.end());
//    return v;
//}
//
//long long getMaxArea(long long arr[], int n)
//{
//    // Your code here
//    if(n==1){
//        return arr[0];
//    }
//    vector<int> left=fun1(arr,n);
//    vector<int> right=fun2(arr,n);
//    long long ans=0;
//    for(int i=0;i<n;i++){
//        long long p=right[i]-left[i]-1;
//        ans=max(ans,p*arr[i]);
//    }
//    return ans;
//}
//int main(){
//    int n=7;
//
//    long long arr[]={6,2,5,4,5,1,6};
//    cout<< getMaxArea(arr,n);
//}
