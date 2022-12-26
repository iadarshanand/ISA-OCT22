#include<bits/stdc++.h>
using namespace std;

void TowerOfHanoi(int n, char src, char dest, char helper)
{
	//Base Case
	if(n==1)
	{
		cout<<"Move disc "<<n<<" from "<<src<<" to "<<dest<<endl;
		return;
	}

	//Recursive Case
	TowerOfHanoi(n-1,src,helper,dest);
	cout<<"Move disc "<<n<<" from "<<src<<" to "<<dest<<endl;
	TowerOfHanoi(n-1,helper,dest,src);
}

int main()
{
	int n;
	cin>>n;

	TowerOfHanoi(n,'A','C','B');
	return 0;
}