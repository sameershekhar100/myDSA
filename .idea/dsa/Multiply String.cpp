//#include "bits/stdc++.h"
//using namespace std;
//string multiply(string num1,string num2){
//    if(num1=="0"||num2=="0") return "0";
//    int m=num1.length(),n=num2.length();
//    vector<int> ans(m+n,0);
//    reverse(num1.begin(),num1.end());
//    reverse(num2.begin(),num2.end());
//    for(int i=0;i<m;i++){
//        int carry=0;
//        for(int j=0;j<n;j++){
//            int prod= (num1[i] - '0') * (num2[j] - '0') + carry;
//            ans[i+j]+= prod % 10;
//
//            carry= prod / 10 + ans[i + j] / 10;
//            ans[i+j]=ans[i+j]%10;
//        }
//        if(carry!=0){
//            ans[n+i]+=carry;
//        }
//    }
//    string res="";
//
//    reverse(ans.begin(),ans.end());
//    int ptr=0;
//    for(int i=0;i<ans.size();i++){
//        if(ans[i]!=0){
//            ptr=i;
//            break;
//        }
//
//    }
//    for(int i=ptr;i<ans.size();i++){
//        res+=ans[i]+'0';
//    }
//    return res;
//}
//int findTheWinner(int n, int k) {
//    queue<int> q;
//    for(int i=1;i<=n;i++){
//        q.push(i);
//    }
//    int p=k;
//    while(q.size()!=1){
//        k=p;
//        while(k--){
//            int r=q.front();
//            q.pop();
//        }
//        q.pop();
//    }
//    return q.front();
//}
//int main(){
//    string s1="999";
//    string s2="99";
//    string ans=multiply(s1,s2);
//    cout<<ans<<endl;
//}
