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

string s;
int n;
int rec(int l, int r,vector<vector<int>> &dp){
    if(l>=r) return 0;

    if(dp[l][r]!=-1) return dp[l][r];

    int ans=0;
    if(s[l]==s[r]) ans=1+rec(l+1,r-1,dp);
    else ans=max(rec(l+1,r,dp),rec(l,r-1,dp));

    return dp[l][r]=ans;
}

void solve(){
    cin>>n;
    cin>>s;
    vector<vector<int>> dp(n,vector<int>(n,-1));
    cout<<rec(0,n-1,dp)<<endl;
}

signed main(){
    IOS
    int t=1; cin>>t; while(t--) 
    solve();
    return 0;
}