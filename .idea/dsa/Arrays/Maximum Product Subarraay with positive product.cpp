//#include "bits/stdc++.h"
//
//using namespace std;
//
//int getMaxLen(vector<int> &nums) {
//    int pos = 0, neg = 0, ans = 0;
//    if (nums[0] > 0) {
//        pos++;
//    } else if(nums[0]<0) {
//        neg++;
//    }
//    for (int i = 1; i < nums.size(); i++) {
//        if (nums[i] > 0) {
//            pos = pos + 1;
//            neg = (neg > 0) ? 1 + neg : 0;
//        } else if (nums[i] < 0) {
//            int temp = (neg > 0) ? neg + 1 : 0;
//            neg = pos + 1;
//            pos = temp;
//        } else{
//            pos=0;
//            neg=0;
//        }
//        ans = max(pos, ans);
//    }
//    return ans;
//}
//
//int main() {
//    vector<int> v = {-1,-2,-3,0,1};
//    int ans = getMaxLen(v);
//    cout << ans << endl;
//
//}
