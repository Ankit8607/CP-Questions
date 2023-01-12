#include<bits/stdc++.h>
using namespace std;
const int mod= 10000007;
#define endl "\n"
#define F first
#define int long long
#define S second
#define vi vector<int>
#define ii pair<int,int>
#define all(a) a.begin(),a.end()
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define tracearray(arr,n)  cout<<#arr<<endl;for(int i=0;i<n;i++)cout<<arr[i]<<" ";cout<<endl;

void solve(){
    int a,b; cin>>a>>b;
    if(a>b) swap(a,b);
    int g=__gcd(a,b);
    for(int i=1;i<1000;i++){
        int p=i*(b/g)-1;
        int q=i*(a/g)-1;
        int n=abs(p*a-b);
        if((n+a)%b==0 and (n+b)%a==0){
            cout<<n<<endl;
            return;
        }
        n=abs(q*b-a);
        if((n+a)%b==0 and (n+b)%a==0){
            cout<<n<<endl;
            return;
        }
    }
}

signed main(){
    IOS
    int t=1; cin>>t; while(t--) 
    solve();
    return 0;
}