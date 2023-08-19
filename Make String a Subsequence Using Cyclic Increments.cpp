// https://leetcode.com/contest/biweekly-contest-111/problems/make-string-a-subsequence-using-cyclic-increments/

class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int l=0;
        for(int i=0;i<str1.size();i++){
            if(str1[i]==str2[l]) l++;
            else if((((str1[i]-'a')+1)%26+'a')==str2[l])l++;
            if(l==str2.size()) break;
        }
        return l==str2.size();
    }
};
