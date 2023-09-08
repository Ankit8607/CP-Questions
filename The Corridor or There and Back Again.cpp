// https://codeforces.com/contest/1872/problem/B

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n; cin>>n;
    vector<pair<int,int>>arr(n);
    for(auto &i:arr) cin>>i.first, cin>>i.second;
    sort(arr.begin(),arr.end());
    int ans=1,mx=1e9;
    for(int i=0;i<n;i++){
        int d=arr[i].first,time=arr[i].second;
        if(d>mx) break;
        mx=min(mx,d+(time-1)/2);
    }
    cout<<mx<<endl;
}

signed main(){
    IOS
    int t; cin>>t;
    while(t--) solve();
    return 0;
}
