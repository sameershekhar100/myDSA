/* TODO Given the N*M binary matrix, 1 represents the healthy person, and 0 represents a patient affected by a coronavirus.
 The task is to check the minimum time required for all persons to get affected.
 A patient at [i, j] cell affects a person at cell [i, j-1], [i, j+1] [i+1, j] and [i-1, j] in one second.*/
//#include <bits/stdc++.h>
//
//using namespace std;
//
//bool check(int i, int j, int N, int M) {
//    return (i >= 0 and i < N and j >= 0 and j < M);
//}
//
//int bfs(vector<vector<int>> &arr, int n, int m) {
//    queue<pair<int, int>> q;
//    int timer = -1;
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            if (arr[i][j] == 0) {
//                q.push({i, j});
//                arr[i][j] = -1;
//            }
//        }
//    }
//    while (!q.empty()) {
//        int p = q.size();
//        for (int i = 0; i < p; i++) {
//            int x = q.front().first;
//            int y = q.front().second;
//            q.pop();
//            if (check(x + 1, y, n, m) && arr[x + 1][y] == 1) {
//                arr[x + 1][y] = -1;
//                q.push({x + 1, y});
//            }
//            if (check(x - 1, y, n, m) && arr[x - 1][y] == 1) {
//                arr[x - 1][y] = -1;
//                q.push({x - 1, y});
//            }
//            if (check(x, y + 1, n, m) && arr[x][y + 1] == 1) {
//                arr[x][y + 1] = -1;
//                q.push({x, y + 1});
//            }
//            if (check(x, y - 1, n, m) && arr[x][y - 1] == 1) {
//                arr[x][y - 1] = -1;
//                q.push({x, y - 1});
//            }
//        }
//        timer++;
//    }
//    return timer;
//}
//
//int main() {
//    //code
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    int t;
//    cin >> t;
//    while (t--) {
//        int n, m;
//        cin >> n >> m;
//        vector<vector<int>> arr(n, vector<int>(m, 0));
//
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < m; j++) {
//                int x;
//                cin >> x;
//                if (x == 0)
//                    arr[i][j] = x;
//                else {
//                    arr[i][j] = 1;
//                }
//            }
//        }
//
//
//        int ans = bfs(arr, n, m);
//
//        cout << ans << endl;
//
//    }
//    return 0;
//}