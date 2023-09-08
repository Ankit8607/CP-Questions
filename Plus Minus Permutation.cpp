// https://codeforces.com/contest/1872/problem/D

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    long long n,a,b; cin>>n>>a>>b;
    if(a==b){
        cout<<0<<endl;
    }
    else{
        long long t=a*b/(__gcd(a,b));
        long long mx1=n/a-n/t,mx2=n/b-n/t;
        long long sum1=n*(n+1)/2-(n-mx1)*(n-mx1+1)/2;
        long long sum2=mx2*(mx2+1)/2;
        cout<<sum1-sum2<<endl;
    }
}

signed main(){
    IOS
    int t; cin>>t;
    while(t--) solve();
    return 0;
}
