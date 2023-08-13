// https://leetcode.com/contest/weekly-contest-358/problems/minimum-absolute-difference-between-elements-with-constraint/

class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums, int x) {
        multiset<int>mt;
        int n=nums.size();
        for(int i=x;i<n;i++){
            mt.insert(nums[i]);
        }
        
        int ans=1e9;
        for(int i=0;i<n-x;i++){
            auto it=mt.lower_bound(nums[i]);
            if(it!=mt.end()) ans=min(ans,abs(nums[i]-*it));
            if(it!=mt.begin()) it--,ans=min(ans,abs(nums[i]-*it));
            mt.erase(mt.find(nums[i+x]));
        }
        return ans;
    }
};
