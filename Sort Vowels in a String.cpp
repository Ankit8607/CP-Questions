// https://leetcode.com/contest/biweekly-contest-109/problems/sort-vowels-in-a-string/

class Solution {
public:
    string sortVowels(string s) {
        string t;
        for(char &i: s){
            if(i=='a' || i=='e' || i=='i' || i=='o' || i=='u' || i=='A' || i=='E' || i=='I' || i=='O' || i=='U'){
                t+=i;
                i='.';
            }    
        }
        sort(t.begin(),t.end());
        int it=0;
        for(auto &i:s){
            if(i=='.') i=t[it++]; 
        }
        return s;
    }
};