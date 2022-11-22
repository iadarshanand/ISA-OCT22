#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
    int n=s.size();
    int m=t.size();
    if(n!=m)return false;
    
    vector<int>cntFreq(26,0);
    
    //STep 1. Traverse s and increment cntfreq
    for(int i=0;i<n;i++)
    {
        cntFreq[s[i]-'a']++;
    }
    
    //Step 2. Traverse t and decrement cntFreq
    for(int i=0;i<m;i++)
    {
        cntFreq[t[i]-'a']--;
    }
    
    //Step 3. Traverse cntFreq
    for(int i=0;i<26;i++)
    {
        if(cntFreq[i]!=0)return false;
    }
    return true;
    
    
}

int main()
{
	string s,t;
	cin>>s>>t;

	bool chk=isAnagram(s,t);
	if(chk)cout<<"Valid Anagram"<<endl;
	else cout<<"Not Valid Anagram"<<endl;
}