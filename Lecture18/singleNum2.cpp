

// problem Lik:- https://leetcode.com/problems/single-number-ii/

class Solution {
public:
    int getBit(int num, int pos)
    {
        return num&(1<<pos);
    }
    
    int binToDec(vector<int>&bit)
    {
        int ans=0;
        long long times=1;
        for(int i=31;i>0;i--)
        {
            ans+=(bit[i]*times);
            times*=2;
        }
        if(bit[0]==1)
        {
            ans=(-(long long)(pow(2,31))+ans);
        }
        return ans;
    }
    
    int singleNumber(vector<int>& a) {
        int n=a.size();
        
        vector<int>bit(32,0);
        for(int i=0;i<n;i++)
        {
            for(int pos=0;pos<32;pos++)
            {
                int findBit=getBit(a[i],pos);
                if(findBit!=0)bit[31-pos]++;
            }
        }
        for(int i=0;i<32;i++)bit[i]%=3;
        
        // for(auto x:bit)cout<<x;
        
        return binToDec(bit);
  
    }
};