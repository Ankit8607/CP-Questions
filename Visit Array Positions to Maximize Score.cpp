// https://leetcode.com/contest/biweekly-contest-109/problems/visit-array-positions-to-maximize-score/

class Solution {
public:
   
    long long rec(int level,int par, int x, vector<vector<long long>>&dp, int n, vector<int>&nums){
        if(level==n) return 0;
        
        if(dp[level][par]!=-1) return dp[level][par];
        
        long long ans=0;
        if(par==(nums[level]%2)) ans=rec(level+1,par,x,dp,n,nums)+nums[level];
        else ans=max(rec(level+1,par,x,dp,n,nums),rec(level+1,1-par,x,dp,n,nums)+nums[level]-x);
        
        return dp[level][par]=ans;
    }
    
    long long maxScore(vector<int>& nums, int x) {
         // #define int long long
        int n=nums.size();
        vector<vector<long long>>dp(n,vector<long long>(2,-1));
        long long ans= rec(1,nums[0]%2,x,dp,n,nums) + nums[0];
        // #undef int
        return ans;
    }
};