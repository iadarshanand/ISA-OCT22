#include<bits/stdc++.h>
using namespace std;

    bool isValidParentheses(string s) {
        int n=s.size();

        stack<char>st;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')st.push(s[i]);
            else
            {
                if(s[i]==')' && !st.empty() && st.top()=='(')st.pop();
                else if(s[i]=='}' && !st.empty() && st.top()=='{')st.pop();
                else if(s[i]==']' && !st.empty() && st.top()=='[')st.pop();
                else return false;
            }

        }
        if(st.size()==0)return true;
        return false;
        // return !st.size();


        
    }

int main()
{
	string s;
	cin>>s;


	bool chk=isValidParentheses(s);
	if(chk)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;

	return 0;
}