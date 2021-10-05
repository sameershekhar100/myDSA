//#include "bits/stdc++.h"
//using namespace std;
//vector<int> fun1(vector<int> v,int n){
//    vector<int> ans;
//    stack<pair<int,int>> s;
//    ans.push_back(-1);
//    s.push({v[0],0});
//    for(int i =1;i<n;i++){
//        int a=v[i];
//        while(!s.empty()&&s.top().first>=a){
//            s.pop();
//        }
//        if(s.empty()){
//            ans.push_back(-1);
//        }
//        else{
//            ans.push_back(s.top().second);
//        }
//        s.push({v[i],i});
//    }
//    return ans;
//}
//vector<int> fun2(vector<int> v,int n){
//    vector<int> ans;
//    stack<pair<int,int>> s;
//    ans.push_back(n);
//    s.push({v[n-1],n-1});
//    for(int i =n-2;i>=0;i--){
//        int a=v[i];
//        while(!s.empty()&&s.top().first>=a){
//            s.pop();
//        }
//        if(s.empty()){
//            ans.push_back(n);
//        }
//        else{
//            ans.push_back(s.top().second);
//        }
//        s.push({v[i],i});
//    }
//    reverse(ans.begin(),ans.end());
//    return ans;
//}
//
//int mah(vector<int> v,int m) {
//    if(m==1){
//        return v[0];
//    }
//    vector<int> left=fun1(v,m);
//    vector<int> right=fun2(v,m);
//    int ans=(right[0]-left[0]-1)*v[0];
//    for(int i=1;i<m;i++){
//        ans=max(ans,(right[i]-left[i]-1)*v[i]);
//    }
//    return ans;
//}
//
//int maxArea(vector<vector<int>> M,int n,int m){
//    vector<int> v(m);
//    for(int i=0;i<m;i++){
//        v[i]=M[0][i];
//    }
//
//    int ans=mah(v,m);
//    if(n==1){
//        return ans;
//    }
//    for(int i=1;i<n;i++){
//        for(int j=0;j<m;j++){
//            if(M[i][j]==1){
//                v[j]+=M[i][j];
//            }
//            else{
//                v[j]=0;
//            }
//        }
//        ans=max(ans,mah(v,m));
//    }
//    return ans;
//
//}
//
//int main(){
//    int n=4,m=4;
////    cin>>n>>m;
//    vector<vector<int>> v={{0, 1 ,1 ,0},
//                           {1 ,1, 1 ,1},
//                           {1, 1, 1 ,1},
//                           {1 ,1 ,0, 0}};
//
//    cout<<maxArea(v,n,m);
//}