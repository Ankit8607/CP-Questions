// https://www.codechef.com/submit/DELXORONE

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

void solve(){
    int n; cin>>n;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        mp[a]++;
    }
    int ans=0;
    int last=-1,fre;
    for(auto &i:mp){
        if(last==-1){
            ans=i.second;
        }
        else{
            if((last^i.first)<=1){
                ans=max(ans,fre+i.second);
            }
            else{
                ans=max(ans,i.second);
            }
        }
        last=i.first;
        fre=i.second;
    }
    cout<<n-ans<<endl;
}

signed main(){
    IOS
    int t=1; cin>>t; while(t--) 
    solve();
    return 0;
}