//#include "bits/stdc++.h"
//
//using namespace std;
//
//int ans(vector<int> nums, int diff) {
//    int n = nums.size();
//    int sum = 0;
//    for (int i = 0; i < n; i++) {
//        sum += nums[i];
//    }
//    if (diff > sum)
//        return 0;
//    int res = sum + diff;
//    if ((sum + diff) % 2 == 1 || res < 0)
//        return 0;
//    res = res / 2;
//    vector<vector<int>> dp(n + 1, vector<int>(res + 1, 0));
//    dp[0][0] = 1;
//    for (int i = 1; i <= n; i++) {
//        for (int j = 0; j <= res; j++) {
//            //here we start iteration from j=0 because array elements can contain zeros and then 1st coloumn can also give
//            //multiple solution
//            if (j - nums[i - 1] >= 0) {
//                dp[i][j] = dp[i - 1][j] + dp[i - 1][j - nums[i - 1]];
//            } else {
//                dp[i][j] = dp[i - 1][j];
//            }
//        }
//    }
//    return dp[n][res];
//
//}
//
//int main() {
//    vector<int> arr = {0, 0, 0, 0, 0, 0, 0, 0, 1};
//    int target = 1;
//    cout << ans(arr, target);
//}