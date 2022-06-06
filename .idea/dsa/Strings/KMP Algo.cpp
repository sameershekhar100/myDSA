//#include <bits/stdc++.h>
//
//using namespace std;
//
//vector<int> longestPrefixSuffix(string pattern) {
//    int n=pattern.length();
//   vector<int> lps(n,0);
//    lps[0]=0; // ababcdaba
//    int i=1,j=0;
//    while(i<n){
//        if(pattern[i]==pattern[j]){
//            lps[i]=j+1;
//            i++;j++;
//        }
//        else{
//            if(j!=0){
//                j=lps[j-1];
//            } else{
//                lps[i]=0;
//                i++;
//            }
//        }
//    }
//    return lps;
//}
//
//bool kmpSearch(string text,string pattern){
//    int lenText=text.length();
//    int patternLen=pattern.length();
//    int i=0,j=0;
//    vector<int> lps= longestPrefixSuffix(pattern);
//    while(i<lenText and j<patternLen){
//        if(text[i]==pattern[j]){
//            i++;j++;
//        }
//        else{
//            if(j!=0){
//                j=lps[j-1];
//            }
//            else i++;
//        }
//    }
//    return j==patternLen;
//}
//int main() {
//    string str="abcxabcdabcdabcy";
//    string pattern="abcdabcy";
//    cout<<kmpSearch(str,pattern)<<endl;
//    return 0;
//}
//
//
