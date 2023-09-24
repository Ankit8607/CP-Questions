// https://leetcode.com/problems/count-valid-paths-in-a-tree/description/

class Solution {
public:
    
    pair<int,int> rec(int node,int par,vector<vector<int>>&g,vector<int>&prime, long long &res){
        pair<int,int>tmp={!prime[node],prime[node]};
        for(auto i:g[node]){
            if(i==par) continue;
            pair<int,int> t=rec(i,node,g,prime,res);
            res+=t.first*tmp.second+t.second*tmp.first;
            if(prime[node]) tmp.second+=t.first;
            else tmp.first+=t.first, tmp.second+=t.second;
        }
        return tmp;
    }
    
    bool pr(int a){
        for(int i=2;i*i<=a;i++){
            if(a%i==0) return 0;
        }
        return 1;
    }
    
    long long countPaths(int n, vector<vector<int>>& edges) {
        vector<vector<int>>g(n+1);
        for(auto i:edges){
            g[i[0]].push_back(i[1]);
            g[i[1]].push_back(i[0]);
        }
        vector<int>prime(n+1,0);
        for(int i=2;i<=n;i++){
            if(pr(i)) prime[i]=1;
        }
        long long ans=0;
        rec(1,0,g,prime,ans);
        return ans;
    }
};
