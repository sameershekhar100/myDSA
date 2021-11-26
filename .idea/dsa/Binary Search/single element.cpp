//#include "bits/stdc++.h"
//
//using namespace std;
//
//int solve(vector<int> &nums) {
//    int s = 0, e = nums.size() - 1, n = e + 1;
//    int ans;
//    while (s <= e) {
//
//        int mid = s + (e - s) / 2;
//        if (mid % 2 == 1) mid--;
//        if (mid + 1 < n and nums[mid] == nums[mid + 1]) {
//            s = mid + 2;
//        } else {
//            ans = nums[mid];
//            e = mid - 1;
//        }
//    }
//    return nums[s];
//}
//
//int main() {
//    vector<int> v = {1, 1, 2, 3, 3, 4, 4, 8, 8};
//    cout << solve(v);
//}