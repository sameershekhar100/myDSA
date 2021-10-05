//#include "bits/stdc++.h"
//using namespace std;
//
//bool checkInclusion1(string s1, string s2) {
//    int i = 0, j = 0;
//    int k = s1.length();
//    int ans = 0;
//    bool b = false;
//    map<char, int> m1, m2;
//    for (int x = 0; x < s1.length(); x++) {
//        m2[s1[x]]++;
//    }
//    while (j < s2.length()) {
//        m1[s2[j]]++;
//        if (j-i+1 == k) {
//            for (int x = 0; x < s1.length(); x++) {
//                if (m1.find(s1[x]) != m1.end() && m1[s1[x]] == m2[s1[x]]) {
//                    b = true;
//                } else {
//                    b = false;
//                    break;
//                }
//            }
//            if (b) {
//                ans++;
//            }
//        } else if (j-i+1 > k) {
//            if (m1[s2[i]] == 1) {
//                m1.erase(s2[i]);
//            } else {
//                m1[s2[i]]--;
//            }
//            i++;
//            for (int x = 0; x < s1.length(); x++) {
//                if (m1.find(s1[x]) != m1.end() && m1[s1[x]] == m2[s1[x]]) {
//                    b = true;
//                } else {
//                    b = false;
//                    break;
//                }
//            }
//            if (b) {
//                ans++;
//            }
//        }
//        j++;
//    }
//
//    return ans;
//}
//
////enhanced approach
//bool checkInclusion(string s1, string s2) {
//    int map[26] = {0};
//    for (char c : s1) map[c - 'a']++;
//    int j = 0, i = 0, count_chars = s1.size();
//    while (j < s2.size()) {
//        if (map[s2.at(j++) - 'a']-- > 0)
//            count_chars--;
//        if (count_chars == 0) return true;
//        if (j - i == s1.size() && map[s2.at(i++) - 'a']++ >= 0)
//            count_chars++;
//    }
//    return false;
//}
//int main(){
//    string s1 = "adc", s2 = "dcda";
//    bool length = checkInclusion(s1, s2);
//    cout << length << endl;
//}