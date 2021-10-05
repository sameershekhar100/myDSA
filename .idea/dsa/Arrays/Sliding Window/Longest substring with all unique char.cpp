#include "bits/stdc++.h"

using namespace std;

//int lenOfLongestSubstr(string s) {
//    map<char,int> m;
//    int i=0,j=0;
//    int ans=0;
//    while(j<s.length()){
//        m[s[j]]++;
//        if(m.size()==j-i+1){
//
//            ans=ans>m.size()?ans:m.size();
//            j++;
//        }
//        else if(m.size()<j-i+1){
//            if(m[s[i]]==1){
//                m.erase(s[i]);
//            }
//            else{
//                m[s[i]]--;
//            }
//            i++;
//            if(m.size()==j-i+1){
//                ans=ans>m.size()?ans:m.size();
//
//            }
//            j++;
//
//        }
//    }
//    return ans;
//}

//int main() {
//    string s = "abcabcbb";
//    bool length = lenOfLongestSubstr(s);
//    cout << length << endl;
//}