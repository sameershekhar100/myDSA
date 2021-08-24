//#include "bits/stdc++.h"
//using namespace std;
//string solve(string a){
///*
//-> Create a count array of size 26(assuming only lower case characters are present) and initialize it with zero.
//-> Create a queue of char datatype.
//-> Store each character in queue and increase its frequency in the hash array.
//-> For every character of stream, we check front of the queue.
//-> If the frequency of character at the front of queue is one, then that will be the first non repeating character.
//-> Else if frequency is more than 1, then we pop that element.
//-> If queue became empty that means there are no non repeating character so we will append #.
// */
//    int arr[26]={0};
//    queue<char> q;
//    string res="";
//    for(auto i:a){
//        arr[i-'a']+=1;
//        if(arr[i-'a']==1){
//            q.push(i);
//        }
//
//        while(!q.empty()&&arr[q.front()-'a']>1){
//            q.pop();
//        }
//
//        if(q.empty())
//            res+='#';
//        else
//            res+=q.front();
//    }
//    return res;
//}
//
//
//int main(){
//    string a="abcabc";
//    cout<<a<<endl;
//
//cout<<solve(a);//aaabc#
//
//}