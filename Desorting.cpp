// https://codeforces.com/contest/1853/problem/A

#include<bits/stdc++.h>
using namespace std;
const int mod= 10000007;
#define endl "\n"
#define F first
#define S second
#define vi vector<int>
#define ii pair<int,int>
#define all(a) a.begin(),a.end()
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define tracearray(arr,n)  cout<<#arr<<endl;for(int i=0;i<n;i++)cout<<arr[i]<<" ";cout<<endl;

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(auto &i: v) cin>>i;
    int diff=1e9;
    for(int i=1;i<v.size();i++){
        diff=min(diff,v[i]-v[i-1]);
    }
    if(diff<0) cout<<0<<endl;
    else cout<<(diff+2)/2<<endl;
}

signed main(){
    IOS
    int t=1; cin>>t; while(t--) 
    solve();
    return 0;
}