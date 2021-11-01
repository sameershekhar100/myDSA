//#include "bits/stdc++.h"
//
//using namespace std;
//
//int solve(vector<int> &nums) {
//    int n = nums.size();
//    vector<int> dp, dp1;
//    dp.push_back(nums[0]);
//    dp1.push_back(nums[0]);
//    for (int i = 1; i < n; i++) {
//        if (dp.size() % 2 == 1) {
//            if (nums[i] < dp.back()) {
//                dp.push_back(nums[i]);
//            } else {
//                dp[dp.size() - 1] = nums[i];
//            }
//        } else {
//            if (nums[i] > dp.back()) {
//                dp.push_back(nums[i]);
//            } else {
//                dp[dp.size() - 1] = nums[i];
//            }
//        }
//    }
//    for (int i = 1; i < n; i++) {
//        if (dp1.size() % 2 == 1) {
//            if (nums[i] > dp1.back()) {
//                dp1.push_back(nums[i]);
//            } else {
//                dp1[dp1.size() - 1] = nums[i];
//            }
//        } else {
//            if (nums[i] < dp1.back()) {
//                dp1.push_back(nums[i]);
//            } else {
//                dp1[dp1.size() - 1] = nums[i];
//            }
//        }
//    }
//    return max(dp1.size(), dp.size());
//}
//
//int main() {
//    vector<int> v = {12, 4, 78, 90, 45, 23};
//    int ans = solve(v);
//    cout << ans;
//}
