//#include "bits/stdc++.h"
//
//using namespace std;
//
//
////Function to check if brackets are balanced or not.
//bool ispar(string x) {
//    // Your code here
//    stack<char> s;
//    for (auto i:x) {
//        if (i == '{' || i == '(' || i == '[') {
//            s.push(i);
//        } else {
//            char ch;
//            if (s.empty() && i != x[x.length() - 1]) {
//                return false;
//            }
//
//            if (i == ']') {
//                ch = s.top();
//                if (ch == '[') {
//                    s.pop();
//                    continue;
//                } else {
//                    return false;
//                }
//            }
//
//            if (i == '}') {
//                ch = s.top();
//                if (ch == '{') {
//                    s.pop();
//                    continue;
//                } else {
//                    return false;
//                }
//            }
//            if (i == ')') {
//                ch = s.top();
//                if (ch == '(') {
//                    s.pop();
//                    continue;
//                } else {
//                    return false;
//                }
//            }
//        }
//    }
//    return s.empty();
//}
//
//
//int main() {
//
//    string a;
//
////    cin >> a;
////
////    if (ispar(a)) {
////        cout << "balanced" << endl;
////    } else {
////        cout << "not balanced" << endl;
////    }
//    vector<int> v;
//    v.push_back(1);
//    v.push_back(2);
//    cout<<v[0];
//
//}