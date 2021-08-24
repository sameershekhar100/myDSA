#include "bits/stdc++.h"
using namespace std;
vector<int> pre(){
    vector<int> v;
    int j=1;
    for(int i=1;i<1999;i++){
        if(j%10!=3&&j%3!=0){
            v.push_back(j);
            j++;
        }
        else {
            j++;
        }
    }
    return v;
}
int main(){
    int t;
    cin>>t;
    vector<int> vv= pre();
    while(t--){
        int n;
        cin>>n;
        cout<<vv[n-1]<<endl;
    }
}