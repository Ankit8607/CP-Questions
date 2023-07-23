// https://leetcode.com/problems/maximum-number-of-groups-with-increasing-length/

class Solution {
public:
    int maxIncreasingGroups(vector<int>&b) {
        int n=b.size();
    	vector<long long>a(n,0);
        for(int i=0;i<n;i++)a[i]=b[i];
        sort(a.begin(),a.end());
        int x=0;
        for(int i=0;i<n;i++){
        	if(a[i]>x)a[i]-=++x;
        	if(a[i]&&i+1<n)a[i+1]+=a[i];
		}
		return x;
    }
};