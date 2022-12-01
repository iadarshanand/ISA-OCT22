#include<bits/stdc++.h>
using namespace std;

vector<int>decToBin(int n)
{
	vector<int>bit(32,0);

	int i=31;
	while(n>0)
	{
		int currBit=n%2;
		bit[i]=currBit;
		i--;
		n/=2;
	}

	return bit;
}

vector<int> decToBin1(int n)
{
	vector<int>v;
	while(n>0)
	{
		v.push_back(n%2);
		n/=2;
	}
	reverse(v.begin(),v.end());
	return v;
}

vector<int>decToBinByRightShift(int n)
{
	
}

void printBit(vector<int>&v)
{
	int n=v.size();
	for(int i=0;i<n;i++)cout<<v[i];
		cout<<endl;
}

int main()
{
	int n;
	cin>>n;

	vector<int> v=decToBin(n);
	vector<int>v1=decToBin1(n);
	printBit(v);
	printBit(v1);


}