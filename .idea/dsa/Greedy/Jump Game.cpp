///*Given an array of non-negative integers nums, you are initially positioned at the first index of the array.
//Each element in the array represents your maximum jump length at that position.
//Your goal is to reach the last index in the minimum number of jumps.
//You can assume that you can always reach the last index.
// */
//#include "bits/stdc++.h"
//using namespace std;
//
//int countJumps(vector<int> nums) {
//
//    //curr reach describes the max jump we can reach from our current index
//    //max reach describes the max reach we can make to from our the jumps vales present between our curr idx(i) to currReach
//    //jump describes that if we reach to the current reach we have to make another jump to max reach to move ahead
//    //For that we have to make an another jump so jump++;
//    int currReach = 0, maxReach = 0, jump = 0;
//    for (int i = 0; i < nums.size() - 1; i++) {
//        maxReach = max(maxReach, i + nums[i]);
//        if (i == currReach) {
//            currReach = maxReach;
//            jump++;
//        }
//    }
//    return jump;
//
//}
//
//int main() {
//    vector<int> v = {2, 3, 1, 1, 4};
//    cout << countJumps(v);
//}
//
