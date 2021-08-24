#include <bits/stdc++.h>
#include <cmath>

int fastpow(int a, int b);

using namespace std;
long gcd(int a,int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

 vector<bool> isPrime(long long int n) {
     vector<bool> a(n + 1, true);

     a[0] = false;
     a[1] = false;
     for (int i = 2; i * i <= n; i++) {


         for (int j = 2 * i; j <= n; j += i) {
             a[j] = false;
         }
     }
     return a;
 }
//int main() {
//
//    int n;
//    cin>>n;
//    while(n--){
//        string s;
//        cin>>s;
//        if(s.length()>=10){
//
//            cout<<s.at(0)<<s.length()-2<<s[s.length()-1]<<endl;
//
//        }
//        else
//            cout<<s<<endl;
//    }
//    return 0;
//}
//
//int fastpow(int a, int b) {
//    long res=1;
//    while(b>0) {
//        if ((b & 1) != 0) {
////                res=(res*a%n)%n ;
//            res=res*a;
//        }
////            a=(a%n*a%n)%n ;
//        a=a*a;
//        b=b>>1;
//    }
//    return res;
//}
