#include <iostream>
#include <string>
using namespace std;



long long int maxSubSum(long long int A[],int n){
    long long int d_max=0,maxSS=0;
   
    for(int i=0;i<n;i++)
    {
        if(d_max>0)
        d_max+=A[i];
        else
        d_max=A[i];
        if(d_max>maxSS)
        {
            maxSS=d_max;
        
        }
    }
    return maxSS;
}
int main() {

	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    
	    long long int n=str.length();
	    long long int A[n];
	    long long int Max=0;
	    
	    for (int i=0;i<n;i++)
	    if(str[i]=='0')
	    A[i]=((i+1)*(n-i));
	    else{
	        A[i]=((i+1)*(i-n));
	        Max-=A[i];
	    }
	        


	    long long int ans=maxSubSum(A,n);
	  
	    Max+=ans;
	    cout<<Max<<"\n";
	}
	return 0;
}