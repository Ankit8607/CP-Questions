class Solution {
public:
    vector<pair<char,int>>arr;
    int len;

    int getLengthOfOptimalCompression(string s, int k) {
        int n=s.size();
        int i=0;
        while(i<n) {
            int cnt=1;
            len++;
            while(i+1<n and s[i]==s[i+1]){
                cnt++;
                i++; 
            }
            arr.push_back({s[i],cnt});
            if(cnt!=1)len+=(to_string(cnt).size());
            i++;
        }
        int dp[101][101];
        for(int j=0;i<=k;j++) dp[0][j]=len;
        for(int i=1;i<=arr.size();i++) {
            for(int j=0;j<=k;j++) {
                dp[i][j]=len;
                int cnt=arr[i-1].second;
                if(cnt>9){
                    if(j>=cnt){ 
                        // dp[i][j]=min(dp[i][j],dp[i-1][j-cnt]-3);
                        if(i-2>=0 and i<arr.size() and arr[i-2].first==arr[i-1].first){
                            
                            dp[i][j]=min(dp[i][j],dp[i-1])
                        }
                    }
                    if(j>=(cnt-1)) dp[i][j]=min(dp[i][j],dp[i-1][j-cnt+1]-2);
                    if(j>=cnt-9) dp[i][j]=min(dp[i][j],dp[i-1][j-(cnt-9)]-1);
                }
                if(cnt>1){
                    if(j>=(cnt-1))dp[i][j]=min(dp[i][j],dp[i-1][j-(cnt-1)-1]);
                    if(j>=cnt) dp[i][j]=min(dp[i][j],dp[i-1][j-cnt-2]);
                }
                else if(j) dp[i][j]=min(dp[i][j],dp[i-1][j-1]-1);
            }
        }
    }
};