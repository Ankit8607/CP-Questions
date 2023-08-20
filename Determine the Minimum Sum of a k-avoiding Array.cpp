// https://leetcode.com/problems/determine-the-minimum-sum-of-a-k-avoiding-array/description/

class Solution {
public:
    int minimumSum(int n, int k) {
        vector<int>ans,pre(500,0);
        int cnt=1;
        while(n--){
            while(k-cnt>0 and pre[k-cnt]==1) cnt++;
            pre[cnt]=1;
            ans.push_back(cnt++);
        }
        int res=0;
        for(auto i: ans) res+=i;
        return res;
    }
};
