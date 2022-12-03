#include<bits/stdc++.h>
using namespace std;

int powEfficientRec(int a, int b, int m)
{
	//Base Case
	if(b==0)return 1;

	//Recursive Case
	int ans=powEfficientRec(a,b/2,m)%m;
	if(b%2)return (a%m * ans%m * ans%m)%m;
	
	return (ans%m * ans%m)%m; //TC O(logN)
}


int main()
{
	int a,b,m;
	cin>>a>>b>>m;
	cout<<powEfficientRec(a,b,m)<<endl;
}