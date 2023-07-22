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
#define int long long 

void solve(){
    int n,c; cin>>n>>c;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>> v[i];
    }
    int ans=0,l=0,r=2;
    while(1){
        int area=0;
        for(int i=0;i<n;i++){
            area+=(v[i]+2*r)*(v[i]+2*r);
        }
        if(area>=c) break;
        r*=2;
    }
    l=r/2;
    while(l<=r){
        int mid=(l+r)/2;
        int area=0;
        for(int i=0;i<n;i++){
            area+=(v[i]+2*mid)*(v[i]+2*mid);
        }
        if(area>c) r=mid-1;
        else if(area<c) l=mid+1;
        else{
            ans=mid;
            break;
        }
    }
    cout<<ans<<endl;
}

signed main(){
    IOS
    int t=1; cin>>t; while(t--) 
    solve();
    return 0;
}