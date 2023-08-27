// https://leetcode.com/problems/find-the-minimum-possible-sum-of-a-beautiful-array/description/

class Solution {
public:
    long long minimumPossibleSum(int n, int target) {
        map<int,int>mp;
        int num=1;;
        while(n--){
            while(mp.count(target-num)){
                num++;
            }
            mp[num++]=1;
        }
        long long sum=0;
        for(auto i: mp) sum+=i.first;
        return sum;
    }
};
