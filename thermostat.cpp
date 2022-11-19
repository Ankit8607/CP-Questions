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

int solve(){
    int l,r,x;
    cin>>l>>r>>x;
    int a,b; cin>>a>>b;
    if(a==b) return 0;
    // if(a>b) swap(a,b);
    if(b>=a+x) return 1;
    if(b<=a-x) return 1;
    if(a>b)swap(a,b);
        if(r-b>=x || a-x>=l) return 2;
        else if(a+x<=r and b-x>=l) return 3;
        else return -1;
}

signed main(){
    IOS
    int t=1; cin>>t; while(t--) 
    cout<<solve()<<endl;
    return 0;
}