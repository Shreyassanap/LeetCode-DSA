class Solution {
public:
    bool isIsomorphic(string s, string t) {

        if(s.length()!=t.length())
            return false;

        unordered_map<char,char>mpp1;
        unordered_map<char,char>mpp2;

        for(int i=0;i<s.length();i++)
        {
            mpp1[s[i]]=t[i];
            mpp2[t[i]]=s[i];

            if(mpp1.size()!=mpp2.size())
                return false;
        }

        
        int i=0;
        while(i!=s.length())
        {
            s[i]=mpp1[s[i]];
            i++;
        }

        if(s==t)
            return true;
        return false;

          
    }
};