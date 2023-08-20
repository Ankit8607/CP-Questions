// https://leetcode.com/contest/weekly-contest-359/problems/maximize-the-profit-as-the-salesman/

class Solution {
public:
    int maximizeTheProfit(int n, vector<vector<int>>& offers) {
        sort(offers.begin(),offers.end());
        int m=offers.size();
        vector<int>dp(n,0);
        int it=0;
        int ans=0,mx=0;
        for(int i=0;i<n;i++){
            while(it<m and offers[it][0]==i){
                dp[offers[it][1]]=max(dp[offers[it][1]],offers[it][2]+(offers[it][0]==0?0:dp[offers[it][0]-1]));
                it++;
            }
            dp[i]=max(i==0?0:dp[i-1],dp[i]);
        }
        for(auto i:dp)ans=max(ans,i);
        return ans;
    }
};
