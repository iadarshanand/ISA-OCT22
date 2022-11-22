#include<bits/stdc++.h>
using namespace std;


string removeDuplicates(string &s)
{
	int n=s.size();

	string ans="";

	for(int i=0;i<n;i++)
	{
		if(ans.size()==0)ans+=s[i];
		else
		{
			if(s[i]==ans.back())
			{
				continue;
			}
			else
			{
				ans+=s[i];
			}
		}
	}
	return ans;
}

int main()
{
	string s;
	cin>>s;

	string ans=removeDuplicates(s);
	cout<<ans<<endl;
}