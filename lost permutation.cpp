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
    int m,sum; cin>>m>>sum;
    int tot=0;
    int arr[52]={0};
    int mx=-1;
    for(int i=0;i<m;i++){
        int a; cin>>a;
        arr[a]=1;
        mx=max(mx,a);
    }
    for(int i=1;i<=mx;i++){
        if(arr[i]==0) sum-=i;
    }
    if(sum==0){ 
        cout<<"yes"<<endl;
        return;
    }
    int i=mx+1;
    while(sum>0){
        sum-=i;
        i++;
    } 
    if(sum==0) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}

signed main(){
    IOS
    int t=1; cin>>t; while(t--) 
    solve();
    return 0;
}