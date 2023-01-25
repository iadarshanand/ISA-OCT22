//Question's Link: https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string-ii/

    string removeDuplicates(string s, int k) {
        int n=s.size();

        stack<pair<char,int>>st;
        for(int i=0;i<n;i++)
        {
            if(st.empty())
            {
                st.push({s[i],1});
            }
            else
            {
                if(st.top().first==s[i])st.push({s[i],st.top().second+1});
                else st.push({s[i],1});
            }

            if(st.top().second==k)
            {
                for(int j=0;j<k;j++)st.pop();
            }
        }
        string ans="";
        while(!st.empty())
        {
            ans+=st.top().first;
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }