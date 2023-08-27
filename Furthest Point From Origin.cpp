// https://leetcode.com/problems/furthest-point-from-origin/description/

class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int l=0,r=0,cnt=0;
        for(auto i: moves){
            if(i=='L') l++;
            else if(i=='R') r++;
            else cnt++;
        }
        return cnt+max(l,r)-min(l,r);
    }
};
