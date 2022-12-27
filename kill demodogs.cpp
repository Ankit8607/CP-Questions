#include<bits/stdc++.h>
using namespace std;
const int mod= 1000000007;
#define endl "\n"
#define F first
#define S second
#define int long long
#define vi vector<int>
#define ii pair<int,int>
#define all(a) a.begin(),a.end()
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int power(int a, int b){
    int ans=1;
    while(b){
        if(b&1){
            ans=(ans*a)%mod;
        }
        a=(a*a)%mod;
        b>>=1;
    }
    return ans;     
}

void solve(){
    int n; cin>>n;
    if(n==2){
        cout<<14154<<endl;
        return;
    }
    else if(n==3){
        cout<<44484<<endl;
        return;
    }
    int ans=(((n*(n+1)%mod)*(2*n+1%mod))%mod)*power(6,mod-2)%mod;
    n--;
    ans+=((((2*n%mod)+(2*(n*(n-1)%mod)%mod))%mod+((n*(n-1)%mod)*(n-2)%mod)*power(3,mod-2))%mod);
    ans%=mod;
    cout<<(ans*2022)%mod<<endl;
}

signed main(){
    IOS
    int t=1; cin>>t; while(t--) 
    solve();
    return 0;
}