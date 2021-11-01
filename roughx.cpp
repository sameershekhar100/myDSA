//#include "bits/stdc++.h"
//using namespace std;
//
//int solve(string s) {
//    if(s==""){
//        return 0;
//    }
//    vector<int> alpha(26,0);
//    for(int i=0;i<s.length();i++){
//        int idx=s[i]-'a';
//        alpha[idx]++;
//    }
//    vector<int> even,odd;
//
//    for(int i=0;i<26;i++){
//        if(alpha[i]%2==0){
//            even.push_back(alpha[i]);
//        } else{
//            odd.push_back(alpha[i]);
//        }
//    }
//    if(even.size()==0){
//        return 0;
//    }
//    sort(even.begin(),even.end());
//    sort(odd.begin(),odd.end());
//    if(even.size()==0){
//        return odd[odd.size()-1];
//    } else if(odd.size()==0){
//        return even[even.size()-1] ;
//    }
//    return max(abs(even[0]-odd[odd.size()-1]),abs(even[even.size()-1]-odd[0]));
//}
//int main() {
//    string s = "aabbgggg";
//    int ans = solve(s);
//    cout << ans << endl;
//}