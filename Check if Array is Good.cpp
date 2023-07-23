// https://leetcode.com/contest/biweekly-contest-109/problems/check-if-array-is-good/

class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            if(nums[i-1]!=i) return 0;
        }
        if(nums[n-1]!=(n-1)) return 0;
        return 1;
    }
};