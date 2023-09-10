// https://leetcode.com/contest/weekly-contest-362/problems/determine-if-a-cell-is-reachable-at-a-given-time/

class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int x=abs(sx-fx),y=abs(sy-fy);
        int ans=max(x,y);
        if(ans==0 and t==1) return 0; 
        return ans<=t;
    }
};
