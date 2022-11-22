#include<iostream>
using namespace std;

void reverse(string &s) 
{
	int n=s.size();
	int i=0,j=n-1;
	while(i<j)
	{
		swap(s[i],s[j]);
		i++;
		j--;
	}
}

bool isPalindrome1(string &s) 
{
	string s1=s; //O(n)
	reverse(s1);
	if(s1==s)return true;
	else return false;
}

bool isPalindrome2(string &s)
{
	int n=s.size();
	int i=0,j=n-1;
	while(i<j)
	{
		if(s[i]!=s[j])return false;
		i++;
		j--;
	}
	return true;
}

int main()
{
	string s;
	cin>>s; //O(n) space comp

	// bool chk=isPalindrome1(s);
	bool chk=isPalindrome2(s);
	if(chk)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}