//// Generate a map of all character occurances of the 2nd string, i.e char and its count.
//// The window size becomes the length of 2nd string, as the anangrams wil also be of this length, amd another variable count denotes the distinct characters left in a sliding window.
//// In a window if the current character is present in map, then decrease its count, and if the count becomes 0, decrease the 'count' variable.
//// If the window size is lesser than k just move forward the window
//// When the window is hit ->
//// If the count is 0, it means all the characters needed for its anagram is here in it, therefore increase your answer
//// To remove the last part (arr[i] part) so that the window can be shifted ->
//// If the s[i] is present in map then increase its count and if it changes from 0->1 then increase the 'count' variable
//
//#include "bits/stdc++.h"
//using namespace std;
//int count(string pat,string txt){
//    map<char,int> m;
//    for(char i:pat){
//        m[i]++;
//    }
//    int i=0,j=0;
//    int ans=0;
//    int p=pat.length();
//    int count=m.size();
//    while (j<txt.length()){
//        if(m.find(txt[j])!=m.end()){
//            m[txt[j]]--;
//            if(m[txt[j]]==0){
//                count--;
//            }
//        }
//
//        if(j-i+1<p){
//
//            j++;
//        }
//        else if(j-i+1==p){
//            if (count==0){
//                ans++;
//            }
//            if(m.find(txt[i])!=m.end()){
//                if(m[txt[i]]==0){
//                    count++;
//                }
//                m[txt[i]]++;
//            }
//
//            i++;
//            j++;
//        }
//    }
//    return ans;
//}
//int main(){
//    string txt,ptr;
//    txt="forxxorfxdofr";
//    ptr="for";
//    vector<int> v;
//    cout<<count(ptr,txt);
//}