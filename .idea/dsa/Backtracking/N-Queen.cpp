//#include "bits/stdc++.h"
//using namespace std;
//
//vector<vector<int>> ans;
//
//bool isSafe(int i,int j,vector<vector<int>>& temp,int n){
//    int r=i;
//    while(r>=0){
//        if(temp[r][j]==1){
//            return false;
//        }
//        r--;
//    }
//    for(int x=i,y=j;x>=0&&y>=0;x--,y--){
//        if(temp[x][y]==1){
//            return false;
//        }
//    }
//    for(int x=i,y=j;x>=0&&y<n;x--,y++){
//        if(temp[x][y]==1){
//            return false;
//        }
//    }
//    return false;   //return faalse isiliye so we can check other possible outcomes too
//}
//bool solve(int n,int rows,vector<vector<int>>& temp){
//    if(rows==n){
//        vector<int> v(n);
//        for(int i=0;i<n;i++){
//            for(int j=0;j<n;j++){
//                if(temp[i][j]==1){
//                    v[i]=j+1;
//                }
//            }
//        }
//        ans.push_back(v);
//        return true;
//    }
//    for(int i=0;i<n;i++){
//        if(isSafe(rows,i,temp,n)) {
//            temp[rows][i] = 1;
//
//            if (solve(n, rows + 1, temp)) {
//                return true;
//            }
//            temp[rows][i] = 0;
//        }
//    }
//    return false;
//
//}
//vector<vector<int>> nQueen(int n) {
//    // code here
//
//    vector<vector<int>> temp(n,vector<int>(n,0));
//    bool b=solve(n,0,temp);
//    return ans;
//}
//int main(){
//    int n;
//    n=4;
//    nQueen(n);
//    for(auto i:ans){
//        for(auto j: i){
//            cout<<j <<" ";
//        }
//        cout<<endl;
//    }
//}