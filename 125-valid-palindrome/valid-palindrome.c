#include <string.h>
bool isPalindrome(char* s)
{
    char a[100000];
    int i=0,j=0;
    
    while(s[i]!='\0')
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            char ch = s[i];
            ch = ch + 32;
            s[i]=ch;
        }

        if((s[i]>='a'&& s[i]<='z')||(s[i]>='0' && s[i]<='9'))
        {
            a[j]=s[i];
            j++;
        }
        i++;
    }

    for(int i=0;i<j;i++)
    {
        if(a[i]!=a[j-i-1])
        {
            return false;
        }
    }
    return true;
       
}