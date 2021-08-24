////
//// Created by LENOVO on 04-06-2021.
////
//
//#include "bits//stdc++.h"
//
//using namespace std;
//
//int pre(char ch) {
//    if (ch == '^') {
//        return 3;
//    } else if (ch == '/' || ch == '*') {
//        return 2;
//    } else if (ch == '+' || ch == '-') {
//        return 1;
//    } else
//        return -1;
//}
//
//string InxToPre(string str){
//    string res="";
//    stack<char> s;
//    reverse(str.begin(),str.end());
//
//    for(int i=0;i<str.length();i++){
//        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
//            res+=str[i];
//        }
//        else if(str[i]==')'){
//            s.push(str[i]);
//        }
//        else if(str[i]=='('){
//            while (!s.empty()&& s.top()!=')'){
//                res+=s.top();
//                s.pop();
//            }
//            if(!s.empty()){
//                s.pop();
//            }
//        }
//        else{
//            if(!s.empty()&&pre(s.top())>=pre(str[i])){
//                res+=s.top();
//                s.pop();
//            }
//            s.push(str[i]);
//        }
//    }
//    while (!s.empty()){
//        res+=s.top();
//        s.pop();
//    }
//    reverse(res.begin(),res.end());
//
//    return res;
//}
//
//int main(){
//    string s;
//    cin>>s;
//    string res=InxToPre(s);
//    cout<<res<<endl;
//    return  0;
//
//}