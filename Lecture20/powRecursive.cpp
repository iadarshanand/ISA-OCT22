#include<bits/stdc++.h>
using namespace std;

int powRec(int a, int b)
{
	//Base Case
	if(b==0)return 1;

	//Recursive Case
	return a*powRec(a,b-1); //TC O(N)
}

int powEfficientRec(int a, int b)
{
	//Base Case
	if(b==0)return 1;

	//Recursive Case
	int ans=powEfficientRec(a,b/2);
	if(b%2)return a*ans*ans;
	
	return ans*ans; //TC O(logN)
}


int main()
{
	int a,b;
	cin>>a>>b;

	cout<<powRec(a,b)<<endl;
	cout<<powEfficientRec(a,b)<<endl;
}