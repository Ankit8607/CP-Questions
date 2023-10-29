// https://leetcode.com/problems/minimum-increment-operations-to-make-array-beautiful/description/

class Solution {
public:
    long long minIncrementOperations(vector<int>& nums, int k) {
        for(auto &i:nums) i=max(0,k-i);
        long long a1=nums[0],a2=nums[1],a3=nums[2];
        for(int i=3;i<nums.size();i++){
            long long t=a3;
            a3=nums[i]+min({a1,a2,a3});
            a1=a2; a2=t;
        }
        return min({a1,a2,a3});
    }
};
