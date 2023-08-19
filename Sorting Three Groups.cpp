// https://leetcode.com/contest/biweekly-contest-111/problems/sorting-three-groups/

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr(n,0),brr(n,0),crr(n,0);
        vector<vector<int>>cnt(n,vector<int>(3,0));
        cnt[n-1][nums[n-1]-1]=1;
        for(int i=n-2;i>=0;i--){ 
            // cnt[i][0]=cnt[i+1][0];
            // cnt[i][1]=cnt[i+1][1];
            // cnt[i][2]=cnt[i+1][2];
            cnt[i]=cnt[i+1];
            cnt[i][nums[i]-1]++;
        }
        int ans=cnt[0][1]+cnt[0][2];
        
        for(int i=0;i<n;i++){
            int t=cnt[0][1]-cnt[i][1]+cnt[0][2]-cnt[i][2];
            for(int j=i;j<=n;j++){
                int tmp=cnt[i][0]+cnt[i][2]+(j==n?0:-cnt[j][0]-cnt[j][2]);
                int tmp2=j==n?0:cnt[j][0]+cnt[j][1];
                ans=min(ans,t+tmp+tmp2);
            }
        }
        return ans;
    }
};
