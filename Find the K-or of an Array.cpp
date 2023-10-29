// https://leetcode.com/problems/find-the-k-or-of-an-array/description/

class Solution {
public:
    int findKOr(vector<int>& nums, int k) {
        vector<int>ans(31,0);
        for(auto i:nums){
            for(int j=0;j<31;j++){
                if((1<<j)&i) ans[j]++;
            }
        }
        int res=0;
        for(int i=0;i<31;i++)
            if(ans[i]>=k) res+=(1<<i);
        return res;
    }
};
