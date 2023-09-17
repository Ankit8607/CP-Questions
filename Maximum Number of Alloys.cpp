// https://leetcode.com/problems/maximum-number-of-alloys/description/

class Solution {
private:
    bool isPossible(int n, int k, int budget, vector<vector<int>> &composition, vector<int> &stock, 
                    vector<int> &costs, int fixed_alloy){
        
        for (int i = 0; i < k; i++) {
            long long calBudget = 0;
            for (int j = 0; j < n; j++) {
                long long required = 1LL*composition[i][j]*fixed_alloy;
                required -= stock[j];
                if (required > 0) {
                    calBudget += 1LL*required*costs[j];
                }
            }
            if (calBudget <= 1LL*budget) return true;
        }
        return false;
    }
public:
    int maxNumberOfAlloys(int n, int k, int budget, vector<vector<int>> &composition, vector<int> &stock, vector<int> &cost) {
        
        int low = 1, high = 1e9;
        int ans =0;

        while (low <= high) {
            int mid = low + (high-low)/2;
            if (isPossible(n, k, budget, composition, stock, cost, mid)) {
                low = mid + 1;
                ans = mid;
            } else {
                high = mid - 1;
            }
        }

        return ans;
    }
};
