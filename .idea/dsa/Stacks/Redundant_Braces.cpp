//#include "bits/stdc++.h"
//#include <string>
//using namespace std;
//bool calculate(string);
//int main(){
//    string a="a+b";
//    bool res= calculate(a);
//    cout<<res;
//    return 0;
//}
//bool calculate(string a){
//        string s1="(a)";
//    if(a.find(s1,0))
//        return 1;
//    int count =0;
//    stack<char> s;
//    for(auto i:a){
//        if(i==')'){
//            while(!s.empty()){
//                if(s.top()=='('){
//                    if(count>0){
//                        count=0;
//                        s.pop();
//                        break;
//                    } else{
//                        return 1;
//                    }
//                }
//                else{
//                    count++;
//                    s.pop();
//                }
//            }
//        }
//        else{
//            s.push(i);
//        }
//    }
//
//    return 0;
//}