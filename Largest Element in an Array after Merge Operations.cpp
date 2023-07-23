// https://leetcode.com/contest/weekly-contest-355/problems/largest-element-in-an-array-after-merge-operations/

class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        long long ans=0,last=0;
        int n=nums.size();
        int l=n-2,r=n-1;
        last=nums[n-1];
        ans=nums[n-1];
        while(l>=0){
            if(nums[l]<=last){
                last+=nums[l];                
            }
            else{
                last=nums[l];
            }
            ans=max(ans,last);
            l--;
        }
        return ans;
    }
};