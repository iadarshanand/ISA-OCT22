#include<bits/stdc++.h>
using namespace std;

    int divisibleSubarrayByK(vector<int>& a, int k) {
        int n=a.size();
        // for(int i=0;i<n;i++)a[i]%=k;
        
        vector<int>rem(k,0);
        rem[0]=1;
        
        int csum=0;
        for(int i=0;i<n;i++)
        {
            csum=(csum%k + a[i]%k +k)%k;
            rem[csum]++;
        }
        
        int ans=0;
        for(int i=0;i<k;i++)
        {
            ans+=(rem[i]*(rem[i]-1))/2;
        }
        return ans;
        
    }

int main()
{
	int t=1;
	// cin>>t;
	while(t--)
	{
	int n,k;
	cin>>n>>k;
	vector<int>a(n);
	for(int i=0;i<n;i++)cin>>a[i];

	cout<<divisibleSubarrayByK(a,k)<<endl;		
	}
	
}