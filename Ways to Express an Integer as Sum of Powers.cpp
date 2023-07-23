// https://leetcode.com/contest/biweekly-contest-109/problems/ways-to-express-an-integer-as-sum-of-powers/

class Solution {
public:
    int mod=1e9+7;
    int rec(int level,int rem,int x,int n,vector<vector<int>>&dp){
        if(rem<0) return 0;
        
        if(level>n) return rem==0;
        
        if(dp[level][rem]!=-1) return dp[level][rem];
        
        long long ans=rec(level+1,rem,x,n,dp);
        if(1LL*pow(level,x)<=1LL*rem)
            ans+=rec(level+1,rem-pow(level,x),x,n,dp);
        
        return dp[level][rem]=ans%mod;
    }
    
    int numberOfWays(int n, int x) {
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return rec(1,n,x,n,dp);
    }
};