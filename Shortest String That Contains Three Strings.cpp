// https://leetcode.com/contest/weekly-contest-356/problems/shortest-string-that-contains-three-strings

class Solution {
public:
    
    int fun(string a, string b){
        if(a.size()>=b.size()){
            int len=b.size();
            for(int i=0;i<=a.size()-b.size();i++){
                if(a.substr(i,len)==b) return -1;
            }
            for(int i=a.size()-b.size();i<a.size();i++){
                if(a.substr(i,len)==b.substr(0,len)){
                    return len;
                }
                len--;
            }
        }
        else{
            int len=a.size();
            for(int i=0;i<a.size();i++){
                if(a.substr(i,len)==b.substr(0,len)) return len;
                len--;
            }
        }
        return 0;
    }
        
    string rec(string a, string b, string c){
        int len=fun(a,b);
        string ans=a;
        if(len!=-1) 
            for(int i=len;i<b.size();i++) ans+=b[i];
        len=fun(ans,c);
        if(len!=-1)
            for(int i=len;i<c.size();i++) ans+=c[i];
        return ans;
    }
    
    string minimumString(string a, string b, string c) {
        string ans=a+b+c;
        string s=rec(a,b,c);
        if(s.length()<ans.length()) ans=s;
        else if(s.size()==ans.size()) ans=s<ans?s:ans;
        s=rec(a,c,b);
        if(s.length()<ans.length()) ans=s;
        else if(s.size()==ans.size()) ans=s<ans?s:ans;
        s=rec(b,a,c);
        if(s.length()<ans.length()) ans=s;
        else if(s.size()==ans.size()) ans=s<ans?s:ans;
        s=rec(b,c,a);
        if(s.length()<ans.length()) ans=s;
        else if(s.size()==ans.size()) ans=s<ans?s:ans;
        s=rec(c,a,b);
        if(s.length()<ans.length()) ans=s;
        else if(s.size()==ans.size()) ans=s<ans?s:ans;
        s=rec(c,b,a);
        if(s.length()<ans.length()) ans=s;
        else if(s.size()==ans.size()) ans=s<ans?s:ans;
        return ans;
    }
};