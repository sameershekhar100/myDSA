//#include "bits/stdc++.h"
//using namespace std;
//static bool cmp(pair<int,int> p1,pair<int,int> p2){
//    if(p1.second==p2.second){
//        return p1.first>p2.first;
//    }
//    return p1.second<p2.second;
//}
//int calculate(int n,int start[],int end[] ){
//
//        // Your code here
//        vector<pair<int, int>> v;
//        for (int i = 0; i < n; i++) {
//            v.push_back({start[i], end[i]});
//        }
//        sort(v.begin(), v.end(), cmp);
//        int count = 1;
//        int currentTime=v[0].second;
//        for (int i = 1; i < n; i++) {
//            if (v[i ].first > currentTime) {
//                count++;
//                currentTime=v[i].second;
//            }
//        }
//        return count;
//
//}
//int main(){
//    int n;
//    cin>>n;
//    int start[n],end[n];
//    for (int i = 0; i < n; ++i) {
//        cin>>start[i];
//    }
//    for (int i = 0; i < n; ++i) {
//        cin>>end[i];
//    }
//    cout<<calculate(n,start,end);
//}