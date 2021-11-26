#include"header.h"
#include <string.h>
int palindrome(char *str)
{
int i, len, temp=0;
    int flag = 0;
 len = strlen(str);
    for(i=0;i < len ;i++)
    {
        if(str[i] != str[len-i-1])
        {
            temp = 1;
        break;
         }
   }
     if (temp==0)
     return 1;
       else
        return 0; 


}
