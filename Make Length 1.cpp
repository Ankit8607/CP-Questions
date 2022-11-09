// https://www.codechef.com/submit/MAKELENGTH1

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
    string s; cin>>s;
    if(n==1){
        cout<<"YES"<<endl;
        return;
    }
    int ans=1;
    for(int i=0;i<n;i++){
        if(s[i]=='0') continue;
        if(i+1<n and s[i+1]==s[i]){
            i++;
        }
        else ans=0;
    }
    if(ans)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

signed main(){
    IOS
    int t=1; cin>>t; while(t--) 
    solve();
    return 0;
}