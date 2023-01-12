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
int n,m,k;

int rec(int i,int j,vector<vector<int>>& arr,vector<vector<int>>&dp){
    if(i>=n || j>=m) return 1e9;
    if(i==n-1 and j==m-1) return 0;

    if(dp[i][j]!=-1) return dp[i][j];

    int ans=1+min(rec(i+1,j,arr,dp),rec(i,j+1,arr,dp));
    if(arr[i][j]) ans=min(ans,1+rec(i+1,j+1,arr,dp));

    return dp[i][j]=ans; 
}

void solve(){
    cin>>n>>m>>k;
    vector<vector<int>>arr(n,vector<int>(m,0));
    for(int i=0;i<k;i++){
        int a,b; cin>>a>>b;
        arr[a-1][b-1]=1;
    }
    vector<vector<int>>dp(n,vector<int>(m,-1));
    cout<<rec(0,0,arr,dp)<<endl;
}

signed main(){
    IOS
    int t=1; cin>>t; while(t--) 
    solve();
    return 0;
}