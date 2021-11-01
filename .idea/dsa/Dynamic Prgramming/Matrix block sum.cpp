//#include "bits/stdc++.h"
//
//using namespace std;
//
//int find(int i, int j, vector<vector<int>> &v) {
//    i++;
//    j++;
//    if (i < 0 || j < 0)
//        return 0;
//    if (i >= v.size()) i = v.size() - 1;
//    if (j >= v[0].size()) j = v[0].size() - 1;
//    return v[i][j];
//}
//
//vector<vector<int>> matrixBlockSum(vector<vector<int>> &mat, int k) {
//    int m = mat.size(), n = mat[0].size();
//    vector<vector<int>> ans(m + 1, vector<int>(n + 1, 0));
//    for (int i = 1; i <= m; i++) {
//        for (int j = 1; j <= n; j++) {
//
//            ans[i][j] = ans[i - 1][j] + ans[i][j - 1] + mat[i - 1][j - 1] - ans[i - 1][j - 1];
//        }
//    }
//    vector<vector<int>> res(m, vector<int>(n, 0));
//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < n; j++) {
//            res[i][j] = find(i + k, j + k, ans) - find(i - k - 1, j + k, ans) - find(i + k, j - k - 1, ans) +
//                        find(i - k - 1, j - k - 1, ans);
//        }
//    }
//    return res;
//}
//
//int main() {
//    vector<vector<int>> v = {{1, 2, 3},
//                             {4, 5, 6},
//                             {7, 8, 9}};
//    int k = 1;
//    vector<vector<int>> ans = matrixBlockSum(v, k);
//    for (int i = 0; i < ans.size(); ++i) {
//        for (int j = 0; j < ans[0].size(); j++) {
//            cout << ans[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//}