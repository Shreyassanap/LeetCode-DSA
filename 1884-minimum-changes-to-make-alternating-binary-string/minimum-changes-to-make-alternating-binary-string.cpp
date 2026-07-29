class Solution {
public:
    int minOperations(string s) {
        int count=0;
        //conisdering pairs as 01
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='1')
                count++;
            i++;
            if(s[i]=='0')
                count++;
        }

        int count1=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='0')
                count1++;
            i++;
            if(s[i]=='1')
                count1++;
        }

        if(count>count1)
            count=count1;
        
        return count;
        
    }
};