#include<bits/stdc++.h>
using namespace std;
const int mod= 10000007;
#define endl "\n"
#define F first
#define int long long
#define S second
#define vi vector<int>
#define ii pair<int,int>
#define all(a) a.begin(),a.end()
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define tracearray(arr,n)  cout<<#arr<<endl;for(int i=0;i<n;i++)cout<<arr[i]<<" ";cout<<endl;

void solve(){
    int n,y; cin>>n>>y;
    int t=0;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        t|=a;
    }
    int ans=0;
    for(int i=0;i<=20;i++){
        if((y&(1LL<<i))==0){
            if((t&(1LL<<i))){
                cout<<-1<<endl;
                return;
            }
        }
        else if((t&(1LL<<i))==0) ans|=(1LL<<i);
    }
    cout<<ans<<endl;
}

signed main(){
    IOS
    int t=1; cin>>t; while(t--) 
    solve();
    return 0;
}