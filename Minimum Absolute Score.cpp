// https://www.codechef.com/submit/MINABS

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
    string a,b; cin>>a>>b;
    int cnt=0;
    for(int i=0;i<n;i++){
        cnt+=(b[i]-a[i]+26)%26;
    }
    int ans=cnt;
    while(cnt>=0){
        cnt-=26;
        ans=min(ans,abs(cnt));
    }
    cout<<ans<<endl;
}

signed main(){
    IOS
    int t=1; cin>>t; while(t--) 
    solve();
    return 0;
}