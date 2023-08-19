// https://leetcode.com/contest/biweekly-contest-111/problems/number-of-beautiful-integers-in-the-range/

class Solution {
public:
    int dp[10][2][2][10][10][30][2];
    string l,r;
    int len,d;
    
    int rec(int bit,int tlo,int thi,int even,int odd, int rem,int zero){
        if(bit==len){
            if(rem==0) return odd==even;
            return 0;
        }
        
        if(dp[bit][tlo][thi][even][odd][rem][zero]!=-1) return dp[bit][tlo][thi][even][odd][rem][zero];
        
        int ans=0,lo=0;
        if(tlo) lo=l[bit]-'0';
        int hi=9;
        if(thi) hi=r[bit]-'0';
        
        for(int i=lo;i<=hi;i++){
            int ntlo=tlo;
            if(i!=l[bit]-'0') ntlo=0;
            int nthi=thi;
            if(i!=r[bit]-'0') nthi=0;
            int z=(i==0 and zero)?1:0;
            int t=i%2;
            ans+=rec(bit+1,ntlo,nthi,even+(z?0:1-t),odd+(z?0:t),(rem*10+i)%d,z);
        }
        
        return dp[bit][tlo][thi][even][odd][rem][zero]=ans;
    }
    
    int numberOfBeautifulIntegers(int low, int high, int k) {
        d=k;
        r=to_string(high); l=to_string(low);
        l=string(r.size()-l.size(),'0')+l; 
        len=r.size();
        memset(dp,-1,sizeof(dp));
        return rec(0,1,1,0,0,0,1);
    }
};
