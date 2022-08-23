//#include<bits/stdc++.h>
//using namespace std;
//int solve(string str){
//    stack<int> s;
//
//    int currNum=0;
//    char opr='+';
//    int n=str.length();
//    for(int i=0;i<n;i++){
//        char currChar=str[i];
//        if(isdigit(currChar)){
//            currNum=currNum*10+(currChar-'0');
//        }
//        if(!isdigit(currChar) and !iswspace(currChar) or i==n-1) {
//            if (opr == '+') {
//                s.push(currNum);
//            } else if (opr == '-') {
//                s.push(-currNum);
//            } else if (opr == '*') {
//                int z = currNum * s.top();
//                s.pop();
//                s.push(z);
//            } else if (opr == '/') {
//                int z = s.top() / currNum;
//                s.pop();
//                s.push(z);
//            }
//            currNum = 0;
//            opr = currChar;
//        }
//    }
//    int ans=0;
//    while(!s.empty()){
//        ans+=s.top();
//        s.pop();
//    }
//    return ans;
//}
//int main(){
//    string s=" 5+3*4-2/5 ";
//    int ans=solve(s);
//    cout<<ans<<endl;
//}