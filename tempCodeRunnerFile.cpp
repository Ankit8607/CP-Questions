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
    map<int,pair<int,int>>mp;
    mp[4]={2,3};
    mp[2]={4,5};
    // auto it=mp.begin();  // map<int,int>::iterator it;
    for(auto it=mp.begin(); it!=mp.end();it++){
        cout<<(*it).first<<" "<<(it->second).first<<" "<<(it->second).second<<endl;
    }
}

signed main(){
    IOS
    // int t=1; cin>>t; while(t--) 
    solve();
    return 0;
}