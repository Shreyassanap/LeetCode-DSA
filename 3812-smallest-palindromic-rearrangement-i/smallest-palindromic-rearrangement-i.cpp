class Solution {
public:
    string smallestPalindrome(string s) {

        
    unordered_map<char,int> mpp;
    for(int i=0;i<s.length();i++)
        mpp[s[i]]++;
    
    vector<char> ans1;
    vector<char> mid;
    vector<char> ans2;

    sort(s.begin(),s.end());
    int i=0;
    int count=0;
    while(i!=s.length())
    {
        if(mpp[s[i]]%2==1 && count==0)
        {
            count++;
            mid.push_back(s[i++]);
        }
        else
        {
            ans1.push_back(s[i++]);
            if(i==s.length())
                break;
            ans2.push_back(s[i++]);
        }
    }

    reverse(ans2.begin(),ans2.end());

    ans1.insert(ans1.end(),mid.begin(),mid.end());
    ans1.insert(ans1.end(),ans2.begin(),ans2.end());

    string es(ans1.begin(),ans1.end());
    return es;
    

        

        
        
    }
};