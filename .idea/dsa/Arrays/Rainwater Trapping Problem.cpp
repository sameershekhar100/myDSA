//#include "bits/stdc++.h"
//using namespace std;
//long long rainwater(vector<int> arr,int n){
//    vector<int> a1,a2;
//    int m1=0,m2=0;
//    for(int i=0;i<n;i++){
//
//        if(i==0||arr[i]>m1){
//            m1=arr[i];
//        }
//        if(i==0||arr[n-i-1]>m2){
//            m2=arr[n-1-i];
//        }
//
//        a1.push_back(m1);
//        a2.push_back(m2);
//
//        m1=a1.back(),m2=a2.back();
//    }
//    reverse(a2.begin(),a2.end());
//    long long sum=0;
//    for(int i=0;i<n;i++){
//        sum+=min(a2[i],a1[i])-arr[i];
//    }
//    return sum;
//}
//int main(){
//    int n;
//    cin>>n;
//    vector<int> v(n);
//    for (int i = 0; i < n; ++i) {
//        cin>>v[i];
//    }
//    cout<<rainwater(v,n);
//}