

// problem Link: https://leetcode.com/problems/single-number-iii/

class Solution {
public:
    int rightBit(int xorVal)
    {
        int cnt=0;
        while((xorVal&1)==0)
        {
            cnt++;
            xorVal>>=1;
        }
        return cnt;
    }
    vector<int> singleNumber(vector<int>& a) {
        int n=a.size();
        
        int xorVal=0;
        for(int i=0;i<n;i++)xorVal^=a[i];
        
        //find rightmost set Bit of xorVal
        int rightMostSetBit=rightBit(xorVal);
        
        int num1=0,num2;
        for(int i=0;i<n;i++)
        {
            if((a[i]&(1<<rightMostSetBit)))num1^=a[i];
        }
        num2=xorVal^num1;
        return {num1,num2};
        
        
    }
};