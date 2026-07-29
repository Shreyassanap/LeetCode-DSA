bool isValid(char* s) {

    char stack[10000];
    int top=-1,i=0;
    while(s[i]!='\0')
    {
        if(s[i]==')' || s[i]=='}' || s[i]==']')
        {
            if(top==-1)
                return false;
            if(s[i]==')')
            {
                if(stack[top]!='(')
                    return false;
                top--;
            }
            else if(s[i]=='}')
            {
                if(stack[top]!='{')
                    return false;
                top--;                
            }
            else
            {
                if(stack[top]!='[')
                    return false;
                top--;
            }
        }
        else
        {
            top++;
            stack[top]=s[i];
        }
        i++;
    }

    if(top==-1)
        return true;
    else
        return false;
    
}