class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string ans;
        if(strs[0].size()==0)
            return ans;

        int n=strs.size();
        int i=0;
        int flag=1;
        
        while(true)
        {
            for(int j=0;j<n-1;j++)
            {
                if(strs[j][i]=='\0' || strs[j+1][i]=='\0'|| strs[j][i]!=strs[j+1][i]){
                    flag=0;
                    break;
                }
            }

            if(flag==1)
                ans=ans+strs[0][i];
            else
                break;
            i++;
            if(strs[0][i]=='\0')
                break;

        }

        return ans;
        
    }
};