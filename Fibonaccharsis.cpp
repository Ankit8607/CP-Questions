// https://codeforces.com/contest/1853/problem/B

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

int ans=0;

void rec(int y,int x,int pos){
    if(pos ==1 ){
        ans++;
        return;
    }

    int next=y-x;
    if(next>x) return;

    rec(x,y-x,pos-1);
}

void solve(){
    ans=0;
    int n,k; cin>>n>>k;    
    for(int i=(n+1)/2;i<=n;i++){
        int y=i;
        int x=n-i;
        rec(y,x,min(k-2,31));
    }
    cout<<ans<<endl;
}

signed main(){
    IOS
    int t=1; cin>>t; while(t--) 
    solve();
    return 0;
}