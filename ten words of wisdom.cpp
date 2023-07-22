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
    vector<pair<int,ii>> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].second.first>>v[i].first;
        v[i].second.second=i+1;
    }
    sort(v.begin(),v.end());
    for(int i=n-1;i>=0;i--){
        if(v[i].second.first<=10){
            cout<<v[i].second.second<<endl;
            return;
        }
    }
    cout<<1<<endl;
}

signed main(){
    IOS
    int t=1; cin>>t; while(t--) 
    solve();
    return 0;
}