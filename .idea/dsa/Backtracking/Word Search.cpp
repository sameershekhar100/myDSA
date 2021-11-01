//#include "bits/stdc++.h"
//
//using namespace std;
//
//bool solve(vector<vector<char>> &board, string word, int i, int j, int idx) {
//    if (idx == word.length()) {
//        return true;
//    }
//    if (i < 0 || j < 0 || i > board.size() - 1 || j > board[0].size() - 1) {
//        return false;
//    }
//    if (board[i][j] != word[idx]) {
//        return false;
//    }
//    board[i][j] = '$';
//    bool ans1 = solve(board, word, i + 1, j, idx + 1);
//    bool ans2 = solve(board, word, i - 1, j, idx + 1);
//    bool ans3 = solve(board, word, i, j + 1, idx + 1);
//    bool ans4 = solve(board, word, i, j - 1, idx + 1);
//    bool ans = ans1 || ans2 || ans3 || ans4;
//    board[i][j] = word[idx];
//    return ans;
//}
//
////we run the loop bcz of multiple occurence of the 1st char int the matrix and verify from the other occurence if
//// 1st occurence of the 1st char fail to find he word.
//bool findWord(vector<vector<char>> &board, string word) {
//    for (int i = 0; i < board.size(); i++) {
//        for (int j = 0; j < board[0].size(); j++) {
//            if (solve(board, word, i, j, 0)) {
//                return true;
//            }
//        }
//    }
//    return false;
//}
//
//int main() {
//    vector<vector<char>> v = {{'A', 'B', 'C', 'E'},
//                              {'S', 'F', 'C', 'S'},
//                              {'A', 'D', 'E', 'E'}};
//    string s = "ABCCEE";
//    cout << findWord(v, s);
//}