// https://codeforces.com/contest/1872/problem/C

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool prime(int n){
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0) return 0;
    }
    return 1;
}

void solve(){
    int a,b; cin>>a>>b;
    if(b>3 and ((b-a>=1) || (a==b and a%2==0))){
        if(b%2==0) cout<<b/2<<" "<<b/2<<endl;
        else cout<<(b-1)/2<<" "<<(b-1)/2<<endl;
        return;
    }
    else if(a==b and !prime(a)){
        int t=2;
        while(t<b){
            if(__gcd(t,a-t)!=1){
                cout<<t<<" "<<a-t<<endl;
                return;
            }
            t++;
        }
    }
    cout<<-1<<endl;
}

signed main(){
    IOS
    int t; cin>>t;
    while(t--) solve();
    return 0;
}
