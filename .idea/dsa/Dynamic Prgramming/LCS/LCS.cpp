//#include "bits/stdc++.h"
//using namespace std;
//int LCS(string s1,string s2,int x,int y,vector<vector<int>>& v ){
//    if(x==s1.length()||y==s2.length()){
//        return 0;
//    }
//    if(v[x][y]>-1){
//        return v[x][y];
//    }
//    int ans;
//    if(s1[x]==s2[y]){
//
//        ans =1+ LCS(s1,s2,x+1,y+1,v);
//    }else {
//        int opt1 = LCS(s1, s2, x +1, y, v);
//        int opt2 = LCS(s1, s2, x, y + 1, v);
//        ans = max(opt1, opt2);
//    }
//    v[x][y]=ans;
//    return ans;
//}
//
//int LCS1(string s1,string s2){
//
//
//    vector<vector<int>> v(s1.length()+1,vector<int>(s2.length()+1,0));
////    return LCS(s1,s2,0,0,v);
//    for (int i = 1; i < s1.length()+1; ++i) {
//        for (int j = 1; j < s2.length()+1; ++j) {
//            if(s1[s1.length()-i]==s2[s2.length()-j] ){
//                v[i][j]=v[i-1][j-1]+1;
//            } else{
//                v[i][j]=max(v[i][j-1],v[i-1][j]);
//            }
//        }
//    }
//    return v[s1.length()][s2.length()];
//}
//int main(){
//    string s1;
//    cin>>s1;
//    string s2;
//    cin>>s2;
//    int ans=LCS1(s1,s2);
//    cout<<ans<<endl;
//}