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
    string s,ls; cin>>s;
    ls="Yes";
    int i=0,j=0;
    int n=s.size();
    if(s[0]=='Y') j=0;
    else if(s[0]=='e') j=1;
    else j=2;
    while(i<n){
        if(s[i]!=ls[j]){
            cout<<"NO"<<endl;
            return;
        }
        i++;
        j++;
        j%=3;
    }
    cout<<"YES"<<endl;
}

signed main(){
    IOS
    int t=1; cin>>t; while(t--) 
    solve();
    return 0;
}