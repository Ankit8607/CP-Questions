// https://leetcode.com/problems/happy-students/

class Solution {
public:
    int countWays(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0,n=nums.size();
        if(nums[0]!=0) ans=1;
        for(int i=0;i<n;i++){
            if(nums[i]<i+1 and (i+1==n || nums[i+1]>i+1)){
                ans++;
            }
        }
        return ans;
    }
};
