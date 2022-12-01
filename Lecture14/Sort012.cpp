
// problem link:- https://leetcode.com/problems/sort-colors/

class Solution {
public:
    void sortColors(vector<int>& a) {
        int n=a.size();
        
        int i=0,j=n-1,k=0;
        
        while(k<=j)
        {
            if(a[k]==0)
            {
                swap(a[i],a[k]);
                i++;
                k++;
            }
            else if(a[k]==2)
            {
                swap(a[k],a[j]);
                j--;
            }
            else //i.e a[k]==0
            {
                k++;
            }
                
        }
        
    }
};