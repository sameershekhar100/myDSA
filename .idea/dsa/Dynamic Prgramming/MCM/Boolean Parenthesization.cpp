//#include "bits/stdc++.h"
//
//using namespace std;
//
//map<string, int> mp;
//
//int solve(string s, int i, int j, bool isTrue) {
//    if (i > j) {
//        return 0;
//    }
//    if (i == j) {
//        if (isTrue) {
//            return s[j] == 'T';
//        } else {
//            return s[j] == 'F';
//        }
//    }
//    string temp = "";
//    temp.append(to_string(i));
//    temp.push_back(' ');
//    temp.append(to_string(j));
//    temp.push_back(' ');
//    temp.append(to_string(isTrue));
//    if (mp.find(temp) != mp.end()) {
//        return mp[temp];
//    }
//
//    int ans = 0;
//    for (int k = i + 1; k <= j - 1; k += 2) {
//        int lT = solve(s, i, k - 1, true);
//        int lF = solve(s, i, k - 1, false);
//        int rT = solve(s, k + 1, j, true);
//        int rF = solve(s, k + 1, j, false);
//
//        if (s[k] == '^') {
//            if (isTrue) {
//                ans += lT * rF + rT * lF;
//            } else {
//                ans += lT * rT + lF * rF;
//            }
//        } else if (s[k] == '&') {
//            if (isTrue) {
//                ans += lT * rT;
//            } else {
//                ans += lT * rF + lF * rT + lF * rF;
//            }
//        } else if (s[k] == '|') {
//            if (isTrue) {
//                ans += lT * rT + lT * rF + lF * rT;
//            } else {
//                ans += lF * rF;
//            }
//        }
//
//
//    }
//    mp[temp] = ans % 1003;
//    return ans % 1003;
//
//}
//
//int countWays(int N, string S) {
//    // code here
//    return solve(S, 0, N - 1, true);
//
//}
//
//
//int main() {
//    string s = "T|T&F^T";
//    vector<int>  v;
//
//    int N = 7;
//    cout << countWays(N, s);
//
//}