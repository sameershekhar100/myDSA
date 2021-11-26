//#include "bits/stdc++.h"
//
//using namespace std;
//
//bool solve(vector<vector<char>> &board, string word, int i, int j) {
//    if (word.size() == 0) {
//        return 1;
//    }
//    if (i < 0 || j < 0 || i > board.size() - 1 || j > board[0].size() - 1 || board[i][j] != word[0]) {
//        return 0;
//    }
//    board[i][j] = '&';
//    char c = word[0];
//    string s = word.substr(1);
//    return solve(board, s, i + 1, j) ||
//           solve(board, s, i - 1, j) ||
//           solve(board, s, i, j + 1) ||
//           solve(board, s, i, j - 1);
//    board[i][j] = c;
//}
//
//bool exist(vector<vector<char>> &board, string word) {
//    cout << word.substr(1);
//    for (int i = 0; i < board.size(); i++) {
//        for (int j = 0; j < board[0].size(); j++) {
//            if (solve(board, word, i, j)) {
//                return true;
//            }
//        }
//    }
//    return false;
//}
//
//vector<int> solve(vector<vector<int>> &mm) {
//    int m = mm.size(), n = mm[0].size();
//    vector<int> ans;
//    int row = 0, col = 0;
//    int count = 1;
//    while (row < m and col < n) {
//        for (int i = col; i < n; i++) {
//            // ans[row][i]=count;
//            // count++;
//            ans.push_back(mm[row][i]);
//        }
//        row++;
//        for (int i = row; i < m; i++) {
//            // ans[i][n-1]=count;
//            // count++;
//            ans.push_back(mm[i][n - 1]);
//
//        }
//        n--;
//        if (m == row) break;
//        for (int i = n - 1; i >= col; i--) {
//            // ans[m-1][i]=count;
//            // count++;
//            ans.push_back(mm[m - 1][i]);
//
//        }
//        m--;
//        if (n == col) break;
//        for (int i = m - 1; i >= row; i--) {
//            // ans[i][col]=count;
//            // count++;
//            ans.push_back(mm[i][col]);
//
//        }
//        col++;
//    }
//    return ans;
//
//}
//
//int firstMissingPositive(vector<int> &nums) {
//    vector<bool> v(nums.size());
//    for (int i = 0; i < nums.size(); i++) {
//        while (nums[i] > 0 && nums[i] <= nums.size() && nums[i] != nums[nums[i] - 1]) {
//            swap(nums[i], nums[nums[i] - 1]);
//        }
//    }
//    for (int i = 0; i < nums.size(); i++) {
//        if (nums[i] != i + 1) {
//            return i + 1;
//        }
//    }
//    return nums.size() + 1;
//}
//
////int hammingDistance(int x, int y) {
////    int res=x^y;
////    int ans=0;
////    while(res!=0){
////        if((res&1)==1) ans++;
////        res>>1;
////    }
////    return ans;
////}
//int solve(vector<int> &nums, int k) {
//    int i = 0, j = 0;
//    int temp = 1, ans = 0;
//    while (j < nums.size()) {
//        temp = nums[j] * temp;
//        cout << i << " " << j << endl;
//        if (temp < k) {
//            ans++;
//            j++;
//        } else {
//            temp = temp / nums[i];
//            i++;
//            if (i > j) {
//                j = i;
//
//            }
//        }
//    }
//    return ans;
//}
//
//int maxPoints(vector<vector<int>> &p) {
//    int ans = 1;
//
//    for (int i = 0; i < p.size(); i++) {
//        map<double, int> mp;
//        for (int j = i + 1; j < p.size(); j++) {
//            int s1 = p[i][0] - p[j][0], s2 = p[i][1] - p[j][1];
//            if (s2 == 0) {
//                mp[0]++;
//            } else if (s1 == 0) mp[INT_MAX]++;
//            else {
//                double z = (s2 * 0.1) / (s1);
//                mp[z]++;
//            }
//        }
//        for (auto pp:mp) {
//            ans = max(ans, pp.second);
//            cout << pp.first << " " << pp.second << endl;
//        }
//    }
//
//    return ans + 1;
//}
//
//int solve(vector<int> &nums) {
//    int ans = 1, res = 1;
//    int temp = nums.size();
//    for (int i = 1; i < nums.size(); i++) {
//        if (temp < nums[i]) {
//            res++;
//            cout << res << " ";
//            temp = nums[i];
//        } else {
//            temp = nums[i];
//            res = 1;
//        }
//        ans = max(ans, res);
//    }
//    return ans;
//}
//
//int main() {
//    vector<int> v = {1, 3, 5, 4, 7};
////    int k = 100;
//    cout << solve(v);
//}
//////    vector<vector<int>> v = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
//////    vector<int> ans=solve(v);
//////    for(auto i:ans){
//////        cout<<i<<" ";
//////    }
////
//
//////    cout << firstMissingPositive(v) << endl;
//
