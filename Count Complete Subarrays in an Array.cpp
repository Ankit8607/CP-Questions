// https://leetcode.com/contest/weekly-contest-356/problems/count-complete-subarrays-in-an-array

class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mp;
        for(int i:nums) mp[i]++;
        int ans=0;
        for(int i=0;i<n;i++){
            map<int,int>tmp=mp;
            for(int j=n-1;j>=i;j--){
                tmp[nums[j]]--;
                ans++;
                if(tmp[nums[j]]==0) break;
            }
            mp[nums[i]]--;
            if(mp[nums[i]]==0) break;
        }
        return ans;
    }
};