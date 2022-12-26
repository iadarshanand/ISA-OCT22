#include<bits/stdc++.h>
using namespace std;

string keypad[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
vector<string> ans;

void LetterCombHelper(int idx, int n, string &s, string &temp)
{
	//Base Case
	if(idx==n)
	{
		ans.push_back(temp);
		return;
	}

	//Recursive Case
	//convert charDig to intDig
	int digit=s[idx]-'0';

	for(int i=0;i<keypad[digit].size();i++)
	{
		temp+=keypad[digit][i];
		LetterCombHelper(idx+1,n,s,temp);
		//Backtracking
		temp.pop_back();
	}
}

void LetterComb(string &s)
{
	int n=s.size();
	string temp="";

	LetterCombHelper(0,n,s,temp);
}


void printAllPossibleWords(vector<string>&ans)
{
	for(auto x:ans)cout<<x<<" ";
		cout<<endl;
}


int main()
{
	//Take input from user as string
	string s;
	cin>>s;

	LetterComb(s);
	printAllPossibleWords(ans);
	return 0;




}