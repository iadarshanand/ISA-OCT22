#include<bits/stdc++.h>
using namespace std;

string AddTwoBinNum(string s1, string s2)
{
	if(s1<s2)swap(s1,s2);
	//confirmed that s1>=s2

	reverse(s1.begin(),s1.end());
	reverse(s2.begin(),s2.end());

	int n=s1.size();
	int m=s2.size();
	int leftBlanksBit=n-m;

	for(int i=0;i<leftBlanksBit;i++)s2+='0';

	// return "";

	int carry=0;
	string ans="";
	for(int i=0;i<n;i++)
	{
		int bitSum=(s1[i]-'0')+(s2[i]-'0')+carry;
		carry=bitSum/2;
		int currBit=bitSum%2;
		ans+=(currBit+'0');
	}

	while(carry>0)
	{
		int bitSum=carry;
		carry=bitSum/2;
		int currBit=bitSum%2;
		ans+=(currBit+'0');

	}

	reverse(ans.begin(),ans.end());
	return ans;
}

int main()
{
	string a,b;
	cin>>a>>b;

	string ans=AddTwoBinNum(a,b);
	cout<<ans<<endl;


}