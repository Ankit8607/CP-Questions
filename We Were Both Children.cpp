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
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        mp[a]++;
    }
    int ans=0;
    vector<int>cnt(n+1,0);
    for(auto &i: mp){
        int num=i.first;
        while(num<=n){
            cnt[num]+=i.second;
            num+=i.first;
        }
    }
    for(auto &i: cnt) ans=max(ans,i);
    cout<<ans<<endl;
}

signed main(){
    IOS
    int t=1; cin>>t; while(t--) 
    solve();
    return 0;
}