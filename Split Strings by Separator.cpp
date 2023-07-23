// https://leetcode.com/contest/weekly-contest-355/problems/split-strings-by-separator/

class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char sep) {
        vector<string>ans;
        for(auto &i: words){
            int it=0;
            string tmp;
            while(it<i.size()){
                if(i[it]==sep){
                    if(tmp.size()>0)
                        ans.push_back(tmp);
                    tmp="";
                }else tmp+=i[it];
                it++;
            }
            if(tmp.size()>0) ans.push_back(tmp);
        }
        return ans;
    }
};