//#include <bits/stdc++.h>
//#define mod 1000000007
//using namespace std;
//long power(long a,long b){
//    long res=1;
//    while(b>0){
//        if((b&1)!=0){
//            res=(res*a%mod)%mod;
//            b-1;}
//        a=(a%mod*a%mod)%mod;
//        b= b>>1;
//    }
//    return res;
//}
//
////vector<bool> isPrime(long long int n) {
////    vector<bool> a(n+1,true);
////
////    a[0] = false;
////    a[1] = false;
////    for (int i = 2; i * i <= n; i++) {
////
////
////        for (int j = 2 * i; j <= n; j += i) {
////            a[j] = false;
////        }
////    }
////    return a;
////}
//
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    int t;
//    cin>>t;
//
//
//    // vector<bool> b=isPrime()
//    while(t--){
//        //code here
//        long long int a,b;
//        cin>>a>>b;
//
//        while((b&1)!=0){
//            if(b<2){
//                break;
//}           b=b/2;
//        }
//        while(b%5!=0){
//            if(b<5)
//                break;
//            b=b/5;
//        }
//        if(b>1){
//            cout<<"Yes"<<endl;
//        }
//        else
//            cout<<"No"<<endl;
//    }
//    return 0;
//}
