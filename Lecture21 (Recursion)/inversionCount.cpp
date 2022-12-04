#include<bits/stdc++.h>
using namespace std;
#define ll long long
    ll Merge(ll a[], ll s, ll mid, ll e)
    {
        ll cnt=0;
        ll i=s,j=mid+1;
        vector<ll>temp;
        while(i<=mid && j<=e)
        {
            if(a[i]<=a[j])
            {
                cnt+=(j-(mid+1));
                temp.push_back(a[i]);
                i++;
            }
            else
            {
                temp.push_back(a[j]);
                j++;
            }
        }
        
        while(i<=mid)
        {
            cnt+=(j-(mid+1));
            temp.push_back(a[i]);
            i++;
        }
        while(j<=e)
        {
            temp.push_back(a[j]);
            j++;
        }
        
        //Copy from temp to a
        ll idx=0,k=s;
        while(idx<temp.size())
        {
            a[k]=temp[idx];
            idx++;
            k++;
        }
        
        return cnt;
    }
    
    
    ll mergeSort(ll a[], ll s, ll e)
    {
        //Base Case
        if(s>=e)return 0;
        
        //Recursive Case
        ll mid=(s+e)/2;
        ll left=mergeSort(a,s,mid);
        ll right=mergeSort(a,mid+1,e);
        
        ll currInversionCnt=Merge(a,s,mid,e);
        return left+right+currInversionCnt;
        
        
    }
  
    long long int InversionCount(long long a[], long long n)
    {
         ll ans=mergeSort(a,0,n-1);
         return ans;
    }


int main()
{
	ll n;
	cin>>n;
	ll * a=new ll [n];
	for(int i=0;i<n;i++)cin>>a[i];

	cout<<InversionCount(a,n)<<endl;
	
	//deallocate
	delete []a;
	return 0;
}