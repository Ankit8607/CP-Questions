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
    int arr[n+1];
    int t=200000;
    vector<int>v;
    for(int i=0;i*i<=t;i++) v.push_back(i*i);
    arr[0]=0;
    for(int i=1;i<=n;i++){ 
        cin>>arr[i];
        arr[i]^=arr[i-1];
    }
    unordered_map<int,int>mp;
    mp[0]=1;
    int ans=0;
    for(int i=1;i<=n;i++){ 
        for(auto &j:v) ans+=mp[arr[i]^j];
        mp[arr[i]]++;
    }
    ans=(n+1)*n/2-ans;
    cout<<ans<<endl;
}

signed main(){
    IOS
    int t=1; cin>>t; while(t--) 
    solve();
    return 0;
}