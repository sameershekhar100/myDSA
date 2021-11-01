///*format for MCM
// * 1. find the value of i and j
// * 2. find base condition
// * 3. think of a way to iterate from i to j (by ptr k)which partition the main prlb in two sub prlb(i to k and k to j)
// * 4. from those temproary ans find final answer.
// */
//
//
//#include "bits/stdc++.h"
//
//using namespace std;
//
//class Solution {
//
//public:
//    int dp[101][101];
//
//
//    int solve(vector<int> arr, int i, int j) {
//        if (i >= j) {
//            return 0;
//        }
//        if (dp[i][j] != -1) {
//            return dp[i][j];
//        }
//        int temp = INT_MAX;
//        for (int k = i; k < j; k++) {
//            int x = solve(arr, i, k) + solve(arr, k + 1, j) + arr[i - 1] * arr[k] * arr[j];
//            temp = min(temp, x);
//        }
//        dp[i][j] = temp;
//        return temp;
//    }
//
//    int MCM(vector<int> arr, int n) {
//        memset(dp, -1, sizeof dp);
//        return solve(arr, 1, n - 1);
//    }
//};
//
//int main() {
//
//    vector<int> arr = {40, 20, 30, 10, 30};
//    int n = arr.size();
//    Solution ans;
//
//    cout << ans.MCM(arr, n);
//
//}