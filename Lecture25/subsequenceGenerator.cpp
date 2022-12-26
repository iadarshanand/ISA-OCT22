#include<bits/stdc++.h>
using namespace std;

void subseqGenerateHelper(int idx, int n, string &s, string &str, vector<string>&ans)
{
	//base Case
	if(idx>=n)
	{
		ans.push_back(s);
		return;
	}

	//Recursive Case
	// Case 1: taken
	s+=str[idx];
	subseqGenerateHelper(idx+1,n,s,str,ans);

	//Backtracking
	s.pop_back();

	//Case 2: not taken
	subseqGenerateHelper(idx+1,n,s,str,ans);
}

vector<string> subseqGenerate(string &str)
{
	int n=str.size();
	string s="";
	vector<string>ans;

	subseqGenerateHelper(0,n,s,str,ans);

	return ans;
}

int main()
{
	string s;
	cin>>s;

	vector<string>ans=subseqGenerate(s);
	for(auto x:ans)cout<<x<<endl;
	return 0;
}