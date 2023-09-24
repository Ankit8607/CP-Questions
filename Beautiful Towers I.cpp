// https://leetcode.com/problems/beautiful-towers-i/description/

class Solution {
public:
    long long maximumSumOfHeights(vector<int>& maxHeights) {
        int n=maxHeights.size();
        long long ans=0;
        for(int i=0;i<n;i++){
            long long sum=maxHeights[i];
            int mx=sum;
            for(int j=i-1;j>=0;j--){
                if(maxHeights[j]<mx) mx=maxHeights[j];
                sum+=mx;
            }
            mx=maxHeights[i];
            for(int j=i+1;j<n;j++){
                if(maxHeights[j]<mx) mx=maxHeights[j];
                sum+=mx;
            }
            ans=max(ans,sum);
        }
        return ans;
    }
};
