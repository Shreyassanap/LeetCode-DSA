class Solution {
public:
    string reverseWords(string s) {

        stack<string>stk;

        int i=0;

        string temp="";

        while(s[i]!='\0' && s[i]==' ')
            i++;

        int flag=0;
        while(s[i]!='\0')
        {
            if(s[i]==' ')
            {
                if(flag!=0){
                flag=0;
                stk.push(temp);
                temp.clear();
                }
            }
            else
            {
                flag=1;
                temp=temp+s[i];
            }

            i++;

        }
        if(flag==1)
            stk.push(temp);

        s.clear();

        while(!stk.empty())
        {
            s=s+stk.top();
            stk.pop();
            if(!stk.empty())
            s=s+' ';
        }


        return s;
        
    }
};