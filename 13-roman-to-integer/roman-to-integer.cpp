class Solution {
public:
    int romanToInt(string s) {

        unordered_map<char,int>mpp;

        mpp['I']=1;
        mpp['V']=5;
        mpp['X']=10;
        mpp['L']=50;
        mpp['C']=100;
        mpp['D']=500;
        mpp['M']=1000;

        reverse(s.begin(),s.end());
        

        int prev=0,sol=0;

        for(int i=0;i<s.size();i++)
        {
            int val=mpp[s[i]];
            if(prev>val)
                sol-=val;
            else
                sol+=val;
            prev=val;
        }

        return sol;
    }
};