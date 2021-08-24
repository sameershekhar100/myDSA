#include <iostream>
using  namespace std;
string ans="";
void revStr(const string& s,int n){

    if(n<0)
        return;
    int index=s.find_last_of(' ')+1;

    cout<<s.substr(index,n)<<" ";
    revStr(s.substr(0,index-1),index-2);


}
//int main(){
//    string s="Sameer is a boy";
//    revStr(" "+s,s.length()-1);
//
//}
