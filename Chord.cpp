// https://atcoder.jp/contests/abc312/tasks/abc312_a

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

signed main(){
    IOS
    string s; cin>>s;
    vector<string>v={"ACE", "BDF", "CEG", "DFA", "EGB", "FAC", "GBD"};
    for(auto i: v){
        if(i==s){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
    return 0;
}