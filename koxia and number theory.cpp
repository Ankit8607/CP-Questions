#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pr;
const int mod=1e9+7;
int n;
ll a[105];
void Solve(){
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1);
	for(int i=1;i<n;i++)if(a[i]==a[i+1])return puts("No"),void();
	for(int i=2;i<=200;i++){
		vector<int> cnt(i);
		for(int j=1;j<=n;j++)cnt[a[j]%i]++;
		if(*min_element(cnt.begin(),cnt.end())>=2)return puts("No"),void();
	}
	puts("Yes");
}
int main(){
	int t=1;
	cin>>t;
	while(t--)Solve(); 
}
