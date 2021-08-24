////
//// Created by LENOVO on 03-06-2021.
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
//string InxToPost(string str) {
//    string res = "";
//    stack<char> s;
//    for (int i = 0; i < str.length(); i++) {
//        //here if the char is an operand then simply add it to my postfix expresion
//        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
//
//            res += str[i];
//
//        } else if (str[i] == '(') {
//
//            s.push(str[i]);
//
//        } else if (str[i] == ')') {
//
//            /*here we are popping all the signs which are present inside in bbetween the brackets and adding it to
//             our postfix expression and lastly we pop out the unnessary '(' */
//
//            while (!s.empty() && s.top() != '(') {
//                res += s.top();
//                s.pop();
//            }
//
//            if (!s.empty()) {
//                s.pop();
//            }
//        } else {
//
//            /* here we are just checking that if the precedence of my the incoming sign is less than
//            the precedence of s.top() it means that the sign in s.top() which has equal or higher preced
//            is going to be added in the postfix expression. */
//
//            while (!s.empty() && pre(s.top()) >= pre(str[i])) {
//                res += s.top();
//                s.pop();
//            }
//            s.push(str[i]);
//        }
//
//    }
//    while (!s.empty()) {
//        res += s.top();
//        s.pop();
//
//    }
//
//    return res;
//
//}
//
//int main() {
//    string s = "a+b*(c^d-e)^(f+g*h)-i";
//    string res = InxToPost(s);
//    cout << res << endl;
//}