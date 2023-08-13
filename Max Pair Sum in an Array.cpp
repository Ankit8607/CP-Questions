// https://leetcode.com/contest/weekly-contest-358/problems/max-pair-sum-in-an-array/

class Solution {
public:
    
    bool fun(string a, string b){
        // if(a.size()!=b.size()) return -1
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        return a[a.size()-1]==b[b.size()-1];
    }
    
    int maxSum(vector<int>& nums) {
        int n=nums.size();
        int ans=-1;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(fun(to_string(nums[i]),to_string(nums[j]))) ans=max(ans,nums[i]+nums[j]);
            }
        }
        return ans;
    }
};
