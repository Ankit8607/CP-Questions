// https://leetcode.com/contest/weekly-contest-358/problems/apply-operations-to-maximize-score/

class Solution {
public:
    #include <utility>
    int mod=1e9+7;
    
    long long pow(long long a,long long b){
        long long ans=1;
        while(b){
            if(b&1) ans=(ans*a)%mod;
            a=(1LL*a*a)%mod;
            b/=2;
        }
        return ans;
    }
    
    int maximumScore(vector<int>& nums, int k) {
        int n=nums.size();
        vector<pair<int,int>>arr(n),v(n);
        for(int i=0;i<n;i++){
            int num=nums[i];
            v[i]={num,i};
            set<int>st;
            if(num%2==0) st.insert(2);
            while(num%2==0) num/=2;
            for(int i=3;i<=sqrt(num);i+=2){
                if(num%i==0) st.insert(i);
                while(num%i==0) num/=i;
                if(n==1) break;
            }
            arr[i]={(int)st.size(),i};
            if(num>1) arr[i].first++;
        }
        
        stack<int>st;
        int left[n],right[n];
        for(int i=0;i<n;i++){
            while(!st.empty() and arr[st.top()].first<arr[i].first) st.pop();
            if(st.empty()) left[i]=-1;
            else left[i]=st.top();
            st.push(i);
        }
        
        st=stack<int>();
        for(int i=n-1;i>=0;i--){
            while(!st.empty() and arr[st.top()].first<=arr[i].first) st.pop();
            if(st.empty()) right[i]=n;
            else right[i]=st.top();
            st.push(i);
        }
        
        sort(v.begin(),v.end(),greater<pair<int,int>>());
        
        int it=0;
        long long ans=1;
        while(k and it<n){
            long long t= 1LL * (v[it].second-left[v[it].second]) * (right[v[it].second]-v[it].second);
            if(k-t>=0){
                ans= (ans*pow(v[it].first,t))%mod;
                k=k-t;
            }
            else{
                ans= (ans*pow(v[it].first,k))%mod;
                break;
            }
            it++;
        }
        return ans;
    }
};
