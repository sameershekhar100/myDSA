//#include "bits/stdc++.h"
//using namespace std;
//void backtrack(string &s, int i, vector<string> &res) {
//    if (i == s.size()) {
//        res.push_back(s);
//        return;
//    }
//    backtrack(s, i + 1, res);
//    if (isalpha(s[i])) {
//        // toggle case
//        if(isupper(s[i])){
//            s[i]=tolower(s[i]);
//        }
//        else{
//            s[i]=toupper(s[i]);
//        }
//        // s[i]=s[i]^32;
//        backtrack(s, i + 1, res);
//    }
//}
//vector<string> letterCasePermutation(string s) {
//    vector<string> v;
//    backtrack(s,0,v);
//    return v;
//}
//int main(){
//    string s="a1b2";
//    vector<string> ans=letterCasePermutation(s);
//    for(auto i: ans){
//        cout<<i<<" ";
//    }
//    return 0;
//}