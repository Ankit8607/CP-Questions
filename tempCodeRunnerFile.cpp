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
    string s; cin>>s;
    int n=s.size();
    int arr[n];
    for(int i=0;i<n;i++){
        if(s[i]=='1') arr[i]=1;
        else arr[i]=-1;
    }
    for(auto i:arr) cout<<i;
    cout<<endl;
    // int pre[n+1]={0};
    // for(int i=1;i<=n;i++){
    //     pre[i]=pre[i-1]+arr[i-1];
    // }
    int l=0,r=-1;
    int ans=0,lans=0,rans=-1;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum>=0){
            l=i+1;
            sum=0;
            continue;
        }
        if(sum<ans){
            lans=l;
            rans=i;
            ans=sum;
        }
    }
    for(int i=lans;i<=rans;i++){
        if(arr[i]==1) arr[i]=-1;
        else arr[i]=1;
    }
    for(auto i:arr) cout<<i;
    cout<<endl;
    ans=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1) {
            ans+=(i+1)*(n-i);
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