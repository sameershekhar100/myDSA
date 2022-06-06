#include <bits/stdc++.h>
#include <cmath>

using namespace std;

long fastpow(long a, long b, long mod) {
    long res = 1;
    while (b > 0) {

        if ((b & 1) != 0)
            res = (res * a % mod) % mod;


        a = (a % mod * a % mod) % mod;
        b = b >> 1;
    }
    return res;
}

//int main() {
//    // your code goes here
//    int T;
//    cin >> T;
//    while (T--) {
//        long n;
//        cin >> n;
//        long long x;
//        x = fastpow<long>(2, n - 1, MOD);
//
//        cout << x << endl;
//
//    }
//    return 0;
//}
