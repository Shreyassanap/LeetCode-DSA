#include <string.h>
int lengthOfLastWord(char* s) {
    int count=0;
    int len=strlen(s);
    char* ptr=&s[len-1];

    char*ptr1=&s[0];

    while(*ptr==' ')
        ptr=ptr-1;

    while(ptr1<=ptr)
    {   
        if(*ptr==' ')
            break;
        count++;
        ptr=ptr-1;        
    }
        
    return count;    
}