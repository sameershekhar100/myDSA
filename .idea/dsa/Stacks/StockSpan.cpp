//#include "bits/stdc++.h"
//using namespace std;
//vector<int> calculate(int price[] ,int n){
//    vector<int> v;
//    stack<pair<int,int>> s;
//    v.push_back(1);
//    s.push({price[0],0});
//    for(int i=1;i<n;i++){
//        int a=price[i];
//        while(!s.empty()&&s.top().first<=a){
//            s.pop();
//        }
//        if(s.empty()){
//            v.push_back(i+1);
//        }
//        else{
//            v.push_back(i-s.top().second);
//        }
//        s.push({a,i});
//    }
//    return v;
//}
//int main(){
//    int arr[]={100, 80, 60, 70, 60, 75, 85};
//    vector<int> res=calculate(arr,7);
//    for(auto i:res){
//        cout<<i<<" ";
//    }
//}