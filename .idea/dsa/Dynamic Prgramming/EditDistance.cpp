//#include "bits/stdc++.h"
//using namespace std;
//int solve(string s1,string s2,int n,int m,int x,int y,vector<vector<int>> &v){
//    if(x==n||y==m){
//        return max(n-x,m-y);
//    }
//    int ans=0;
//    if(v[x][y]!=-1){
//        return v[x][y];
//    }
//    if(s1[x]==s2[y]){
//        ans =solve(s1,s2,n,m,x+1,y+1,v);
//    }
//    else {
//        int p = 1 + solve(s1, s2, n, m, x + 1, y, v);
//        int q = 1 + solve(s1, s2, n, m, x, y + 1, v);
//        int r = 1 + solve(s1, s2, n, m, x + 1, y + 1, v);
//        ans = min({p, q, r});
//    }
//    v[x][y]=ans;
//    int xx[45];
//    sort(xx,xx+45);
//    return ans;
//}
//int EditDis(string s1,string s2,int n,int m){
//    vector<vector<int>> v(n,vector<int>(m,-1));
//    return solve(s1,s2,n,m,0,0,v);
//}
//int main(){
//    string  s1,s2;
//    cin>>s1>>s2;
//    int ans=EditDis(s1,s2,s1.length(),s2.length());
//    cout<<ans;
//}