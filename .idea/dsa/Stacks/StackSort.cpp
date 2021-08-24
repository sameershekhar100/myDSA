//#include "bits/stdc++.h"
//
//using namespace std;
//
//stack<int> sort(stack<int> &s) {
//    if (s.size() == 1) {
//        return s;
//    }
//    int p = s.top();
//    s.pop();
//    s = sort(s);
//    stack<int> temp;
//
//    if (p > s.top()) {
//        s.push(p);
//
//    } else {
//        while (!s.empty() && p < s.top()) {
//            int q = s.top();
//            temp.push(q);
//            s.pop();
//        }
//        s.push(p);
//
//        while (!temp.empty()) {
//            int z = temp.top();
//            s.push(z);
//            temp.pop();
//        }
//    }
//    return s;
//}
//
//int main() {
//    stack<int> s;
//    s.push(2);
//    s.push(9);
//    s.push(20);
//    s.push(399);
//    s.push(26);
//    stack<int> c = sort(s);
//    while (!s.empty()) {
//        cout << s.top() << " ";
//        s.pop();
//    }
//    return 0;
//}