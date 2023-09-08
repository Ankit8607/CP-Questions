// https://codeforces.com/contest/1872/problem/A

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int a,b,c; cin>>a>>b>>c;
    a=abs(a-b);
    cout<<ceil(1.0*a/(2*c))<<endl;
}

signed main(){
    IOS
    int t; cin>>t;
    while(t--) solve();
    return 0;
}
