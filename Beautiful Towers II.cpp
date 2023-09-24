// https://leetcode.com/problems/beautiful-towers-ii/description/

class Solution {
public:
    long long maximumSumOfHeights(vector<int>& htmp) {
        int n=htmp.size();
        vector<int>h(n+2); h[0]=0; h[n+1]=0;
        for(int i=0;i<n;i++) h[i+1]=htmp[i];
        vector<long long>right(n+2),left(n+2); right[n+1]=0;left[0]=0;
        stack<int>st;
        st.push(n+1);
        long long  ans=0,sum=0;
        for(int i=n;i>0;i--){
            if(h[i]>h[st.top()]) sum+=h[i];
            else{
                while(h[st.top()]>h[i]) st.pop();
                int last=st.top();
                sum=1LL*(last-i)*h[i]+right[last];             
            }
            st.push(i);
            right[i]=sum;
        }
        sum=0;
        while(!st.empty()) st.pop();
        ans=right[1];
        st.push(0);
        for(int i=1;i<=n;i++){
            if(h[i]>left[st.top()]) sum+=h[i];
            else{
                while(h[st.top()]>h[i]) st.pop();
                int last=st.top();
                sum=1LL*(i-last)*h[i]+left[last];             
            }
            st.push(i);
            left[i]=sum;
            ans=max(ans,sum+right[i+1]);
        }
        return ans;
    }
};
