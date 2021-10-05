//#include "bits/stdc++.h"
//
//using namespace std;
//
//int findMin(int n, vector<int> v) {
//    int sum = 0;
//    for (int i = 0; i < v.size(); i++) {
//        sum += v[i];
//    }
//
////now we have to take 2 subset such that their diff is minimum and since we have to divide it into two sets so
////the sum of both subsets = sum of array so
//    //s2-s1=min         and         s2+s1=sum
////so 2*s2=min+sum       so min=sum-2*s2
////since we have to find the minimum +ve difference so sum/2>=s2
////so we will check all possible sum which can be formed by using the array and is <=sum/2 and find the min of range-2*s2
//
//    vector<vector<int>> dp(n + 1, vector<int>(sum + 1));
//    for (int i = 0; i <= n; ++i) {
//        for (int j = 0; j <= sum; ++j) {
//            if (i == 0) {
//                dp[i][j] = 0;
//            }
//            if (j == 0) {
//                dp[i][j] = 1;
//            }
//        }
//    }
//        for (int i = 1; i <= n; ++i) {
//            for (int j = 1; j <= sum; ++j) {
//
//                if(j-v[i-1]>=0){
//                    dp[i][j]=dp[i-1][j-v[i-1]]||dp[i-1][j];
//                }
//                else{
//                    dp[i][j]=dp[i-1][j];
//                }
//            }
//        }
//        int i=0,res=INT_MAX;
//        while(i<=sum/2){
//
//            int temp=dp[n][i];
//            res=min(res,sum-2*i);
//            i++;
//        }
//        return res;
//
//}
//
//int main() {
//
//    int n = 4;
//    vector<int> arr = {1, 6, 11, 5};
//
//    int ans = findMin(n, arr);
//    cout << ans;
//}
