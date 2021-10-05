//#include "bits/stdc++.h"
//using namespace std;
//
//
//int LCS1(string s1,string s2){
//
//    //initialization is done by putting the cells =0
//    vector<vector<int>> v(s1.length()+1,vector<int>(s2.length()+1,0));
////  return LCS(s1,s2,0,0,v);
//int ans=0;
//    for (int i = 1; i < s1.length()+1; ++i) {
//        for (int j = 1; j < s2.length()+1; ++j) {
//            if(s1[s1.length()-i]==s2[s2.length()-j] ){
//                v[i][j]=v[i-1][j-1]+1;
//            } else {
//                v[i][j] = 0;
//            }
//            ans=max(ans,v[i][j]);
//        }
//    }
//    return ans;
//}
//int main(){
//    string s1;
//    cin>>s1;
//    string s2;
//    cin>>s2;
//    int ans=LCS1(s1,s2);
//    cout<<ans<<endl;
//}