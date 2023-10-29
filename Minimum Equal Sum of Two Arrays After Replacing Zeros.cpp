// https://leetcode.com/problems/minimum-equal-sum-of-two-arrays-after-replacing-zeros/description/

class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long sum1=0,sum2=0,cnt1=0,cnt2=0;
        for(auto i:nums1){ 
            sum1+=i;
            if(i==0) cnt1++;
        };
        for(auto i:nums2){
            sum2+=i;
            if(i==0) cnt2++;
        }
        if(cnt1==0 and cnt2==0 ){ 
            if(sum1!=sum2) return -1;
        }
        else{
            if(cnt1==0 and sum1<cnt2+sum2) return -1;
            if(cnt2==0 and sum2<cnt1+sum1) return -1;
        }
        return max(sum1+cnt1,sum2+cnt2);
        // if(sum1==sum2) return sum1+max(cnt1,cnt2);
        // if(sum1>sum2){
        //     if(cnt1>=cnt2) return sum1+cnt1;
        //     return max(sum1+cnt1,sum2+cnt2);
        // }
        
    }
};
