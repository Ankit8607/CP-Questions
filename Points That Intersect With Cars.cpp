// https://leetcode.com/contest/weekly-contest-362/problems/points-that-intersect-with-cars/

class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums)  {
        vector<int>arr(101,0);
        for(auto i:nums){
            for(int j=i[0];j<=i[1];j++) arr[j]=1;
        }
        int cnt=0;
        for(int i=0;i<101;i++) cnt+=arr[i];
        return cnt;
    }
};
