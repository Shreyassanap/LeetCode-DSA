class Solution {
public:
    string smallestPalindrome(string s) {

        unordered_map<char,int> mpp;

        for(int i=0;i<s.length();i++)
            mpp[s[i]]++;
        
        vector<char> ans;
        int count=0;
        vector<char>mid;
        sort(s.begin(),s.end());
        for(int i=0;i<s.length();i++)
        {
            if(mpp[s[i]]%2==1 && count==0){
                mid.push_back(s[i]);
                count++;
            }
            else
                ans.push_back(s[i++]);
        }

       

        string b(ans.begin(),ans.end());
        ans.insert(ans.end(),mid.begin(),mid.end());

        string a(ans.begin(),ans.end());

        reverse(b.begin(),b.end());

        return a+b;
        


        
    }
};