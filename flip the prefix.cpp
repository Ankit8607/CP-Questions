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
    int n,k; cin>>n>>k;
    string s;
    cin>>s;
    int ans=1e9;
    int pre[n];
    pre[0]=0;
    for(int i=1;i<n;i++){
        if(s[i]!=s[i-1]) pre[i]=1+pre[i-1];
        else pre[i]=pre[i-1];
    }
    for(int i=k-1;i<n;i++){
        int l=i-k+1,r=i;
        int cnt=pre[r]-pre[l]+1;
        if(s[r]=='1') ans=min(ans,cnt-1);
        else ans=min(ans,cnt);
    }
    cout<<ans<<endl;
}

signed main(){
    IOS
    int t=1; cin>>t; while(t--) 
    solve();
    return 0;
}