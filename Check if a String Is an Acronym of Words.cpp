// https://leetcode.com/contest/weekly-contest-359/problems/check-if-a-string-is-an-acronym-of-words/

class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string tmp;
        for(auto i: words) tmp+=i[0];
        return tmp==s;
    }
};
