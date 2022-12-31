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
    int n, m;
    cin >> n >> m;
    priority_queue<int> pq;
    int b[m];
    for (int i = 0; i < n; i++)
    {
        int alpha; cin >> alpha;
        pq.push(-alpha);
    }
    for (int i = 0; i < m; i++)
        cin >> b[i];
    int i = 0;
    while (m--)
    {
        pq.pop();
        pq.push(-1 * b[i++]);
    }
    int ans = 0;
    while (!pq.empty())
    {
        ans += -1 * pq.top();
        pq.pop();
    }
    cout << ans << endl;
}

signed main(){
    IOS
    int t=1; cin>>t; while(t--) 
    solve();
    return 0;
}