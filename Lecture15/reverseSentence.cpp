#include<bits/stdc++.h>
using namespace std;

void reverse(char *ch)
{
	int n=strlen(ch);

	int i=0,j=n-1;
	while(i<j)
	{
		swap(ch[i],ch[j]);
		i++;
		j--;
	}
	return;
}

int main()
{
	char ch[100];
	cin.getline(ch,100);
	reverse(ch);
	cout<<ch<<endl;
}