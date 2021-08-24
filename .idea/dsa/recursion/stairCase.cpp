////A child is running up a staircase with N steps, and can hop either 1 step, 2 steps or 3 steps at a time.
//// Implement a method to count how many possible ways the child can run up to the stairs.
//// You need to return number of possible ways W.
//
//#include "bits/stdc++.h"
//#include <cstring>
//#define ll long long ;
//using  namespace std;
//int co=0;
//void solve(int n,int steps) {
//    if (n < 0){
//        co = -1;
//        return;
//    }if (steps == n) {
//        co++;
//        return;
//    }if (steps == n - 1) {
//        co += 1;
//        return;
//    }if (steps == n - 2){
//        co += 2;
//        return;
//    }   solve(n,steps+1);
//    solve(n,steps+2);
//    solve(n,steps+3);
//}int main() {
//    int n;
//    cin>>n;
//    int steps=0;
//    solve(n,steps);
//    cout<<co;
//
//}