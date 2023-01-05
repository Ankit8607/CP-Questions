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
    int n,k,sum; cin>>n>>k>>sum;
    vector<int>ans;
    while(n>0){
        if((sum%k)==0) ans.push_back(0);
        else if(((sum-1)%k)==0){ 
            sum-=1;
            ans.push_back(1);
        }
        else if(((sum+1)%k)==0){ 
            sum+=1;
            ans.push_back(-1);
        }
        else{
            cout<<-2<<endl;
            return;
        }
        sum/=k;
        n--;
    }
    
    if(sum){
        cout<<-2<<endl;
        return;
    }
    for(auto &i:ans) cout<<i<<" ";
    cout<<endl;
}

signed main(){
    IOS
    int t=1; cin>>t; while(t--) 
    solve();
    return 0;
}