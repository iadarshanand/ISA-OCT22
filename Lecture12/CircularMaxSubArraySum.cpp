#include<bits/stdc++.h>
using namespace std;


int maxSub(int*a, int n)
{
	int ans=INT_MIN;
	int csum=0;
	for(int i=0;i<n;i++)
	{		
		csum+=a[i];
		ans=max(ans,csum);
		if(csum<0)csum=0;
	}
	return ans;
}
    
int minSub(int* a, int n)
{
	int ans=INT_MAX;
	int csum=0;
	for(int i=0;i<n;i++)
	{
		csum+=a[i];
		ans=min(ans,csum);
		if(csum>0)csum=0;

	}
	return ans;
}    

 
 //Method 1   
int method1(int* a, int n) {
    int op1=maxSub(a,n);
    int op2=minSub(a,n);
    
    int totSum=0;
    for(int i=0;i<n;i++)totSum+=a[i];
    int ans=totSum-op2;
    if(op2>=0 || ans==0)return op1; //ans==0 on tc {all elements be negative}==> {-1,-2,-3}
    
    
    return max(ans,op1);
    
}

//Method 2
//Here we find minSubArray sum in linear Array by help of maxSubarraySum function
int method2(int *a,int n) {
    int op1=maxSub(a,n);
    
    int totSum=0;
    for(int i=0;i<n;i++)totSum+=a[i];

    //change each element to negative to find minSubArray Sum
    for(int i=0;i<n;i++)a[i]*=(-1);
    int op2=maxSub(a,n);
       
    op2=totSum+op2;
    if(op2==0)return op1;
   
    return max(op1,op2);
 
}

int main()
{
	int n;
	cin>>n;

	int *a=new int[n];

	for(int i=0;i<n;i++)cin>>a[i];

	cout<<method1(a,n)<<endl;
	
	//Method2
	//Try to remove minSubarraySum function and get minSubarray sum by help of maxSubarray sum
	// Hint: 1. first change all element to negative.
		 //  2. find maxSubsum of thise changed array
	//       3. minSubSum=(-1)*(maxSubSum)

	cout<<method2(a,n)<<endl;

}