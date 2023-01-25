//Question's Link: https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/

// Assignment: Try to solve it using Two pointers [S.C = O(1))]


    string removeDuplicates(string s) {
        int n=s.size();

        stack<char>st;
        for(int i=0;i<n;i++)
        {
            if(st.empty())st.push(s[i]);
            else
            {
                if(st.top()==s[i])st.pop();
                else st.push(s[i]);
            }
        }
        string ans="";
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }

        reverse(ans.begin(),ans.end());
        return ans;
        
    }


