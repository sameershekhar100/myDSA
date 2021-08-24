//#include "bits/stdc++.h"
//using namespace std;
//vector<int> calculate(int arr[] ,int n){
//    stack<pair<int,int>> s;
//    vector<int> v;
//    pair<int,int>p;
//    p.first=arr[0];
//    p.second=1;
//    s.push(p);
//    v.push_back(p.first);
//    for(int i=1;i<n;i++){
//
//            int c=1;
//            while(!s.empty()&&s.top().first<=arr[i]){
//                c+=s.top().second;
//                s.pop();
//            }
//            p.first=arr[i];
//            p.second=c;
//            s.push(p);
//            v.push_back(c);
//
//    }
//
//    return v;
//}
//int main(){
//    int arr[]={100, 80, 60, 70, 60, 75, 85};
//    vector<int> res=calculate(arr,7);
//    for(auto i:res){
//        cout<<i<<" ";
//    }
//}