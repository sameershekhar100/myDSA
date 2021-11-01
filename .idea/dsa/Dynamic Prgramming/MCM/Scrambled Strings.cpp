//#include "bits/stdc++.h"
//using namespace std;
//
//unordered_map<string,bool> mp;
//bool isScramble(string s1, string s2) {
//    if(s1.length()!=s2.length()){
//        return 0;
//    }
//    if(s1.compare(s2)==0){
//        return true;
//    }
//    if(s1.length()<1){
//        return false;
//    }
//
//    string key=s1;
//    key+=" "+s2;
//    if(mp.find(key)!=mp.end()){
//        return mp[key];
//    }
//    bool flag=0;
//    for(int i=1;i<s1.length();i++){
//        bool b1=isScramble(s1.substr(0,i),s2.substr(s1.length()-i,i))
//                &&isScramble(s1.substr(i,s1.length()-i),s2.substr(0,s1.length()-i));
//
//        bool b2=isScramble(s1.substr(0,i),s2.substr(0,i))
//                &&isScramble(s1.substr(i),s2.substr(i));
//        if(b1||b2){
//            flag= true;
//            break;
//        }
//    }
//    mp[key]=flag;
//    return flag;
//}
//int main(){
//    string s1="great",s2="egtar";
//    cout<<isScramble(s1,s2)<<endl;
//}