// https://leetcode.com/contest/weekly-contest-356/problems/number-of-employees-who-met-the-target/

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int ans=0;
        for(int i: hours){
            if(i>=target) ans++;
        }
        return ans;
    }
};