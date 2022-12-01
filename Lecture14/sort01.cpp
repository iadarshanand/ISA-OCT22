#include<bits/stdc++.h>
using namespace std;

void sort01(vector<int>&a)
{
	int n=a.size();
	int i=0,j=0;

	while(j<n)
	{
		// if(a[j]==0)
		// {
		// 	swap(a[i],a[j]);
		// 	i++;
		// 	j++;
		// }
		// else 
		// {
		// 	j++;
		// }

		if(a[j]==0)
		{
			swap(a[i],a[j]);
			i++;
		}
		j++;

	}
}

int main()
{
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++)cin>>a[i]; //a[i] always be either 0 or 1

	sort01(a);
	for(int i=0;i<n;i++)cout<<a[i]<<" ";
	cout<<endl;


}