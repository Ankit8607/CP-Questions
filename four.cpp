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
    int n,m; cin>>n>>m;
    vector<int>arr(n*m);
    for(int i=0;i<n*m;i++) cin>>arr[i];
    sort(arr.begin(),arr.end());
    int mn=(min(n,m))/2;
    int mx=(min(n,m)-1)/2;
    int path=n+m-1;
    int l=mn,r=mn+path-1;
    int lans=l,rans=r;
    while(r<(m*n-mx)){
        if(arr[rans]-arr[lans]>arr[r]-arr[l]){
            lans=l;
            rans=r;
        }
        l++; r++;
    }
    vector<int>rem;
    for(int i=0;i<lans;i++) rem.push_back(arr[i]);
    for(int i=rans+1;i<n*m;i++) rem.push_back(arr[i]);
    l=0;r=rem.size()-1;
    int ans[n][m]={0};
    if(n<=m){
        for(int i=0;i<n;i++){
            ans[i][0]=arr[lans++];
        }
        for(int j=1;j<m;j++){
            ans[n-1][j]=arr[lans++];
        }
        int par=0;
        for(int i=0;i<n-1;i++){
            if(par==0) ans[i][1]=rem[l++];
            else ans[i][1]=rem[r--];
            par=1-par;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(ans[i][j]==0) ans[i][j]=rem[l++];
            }
        }
    }
    else{
        for(int j=0;j<m;j++){
            ans[0][j]=arr[lans++];
        }
        for(int i=1;i<n;i++){
            ans[i][m-1]=arr[lans++];
        }
        int par=0;
        for(int i=0;i<m-1;i++){
            if(par==0) ans[0][i]=rem[l++];
            else ans[0][i]=rem[r--];
            par=1-par;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(ans[i][j]==0) ans[i][j]=rem[l++];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) cout<<ans[i][j]<<" ";
        cout<<endl;
    }
}

signed main(){
    IOS
    int t=1; cin>>t; while(t--) 
    solve();
    return 0;
}