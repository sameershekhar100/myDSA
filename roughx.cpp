#include <bits/stdc++.h>
#include <string>

#define lli long long int
#define ll long long
#define REP(v) for(auto &i:v)
#define all(x) x.begin(),x.end()
#define rep(i, j, n, in) for (int i=j ; i<n ; i+=in)
#define vi vector<int>
#define vpii <vector<pair<int,int>>
#define heap priority_queue
#define MOD 1000000007
using namespace std;

void solve() {
    int n, m;
    cin>>n>>m;
    vi v2(m);
    multiset<int> v1;
    for(int i=0;i<n;i++) {
        int z;cin>>z;
        v1.insert(z);
    }
    REP(v2) cin>>i;
    //sort(all(v1));
    for(int i=0;i<m;i++){
        auto it=v1.upper_bound(v2[i]);
        if(it==v1.begin()) cout<<"-1\n";
        else{
            cout<<*(--it)<<"\n";
            v1.erase(it);
        }
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin>>t;
    while (t--)
        solve();


    return 0;
}

