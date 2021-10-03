#include <stdio.h>
#include <string.h>

void main()
{
    char s[100],*str;
    int count = 0;
    printf("Enter text: ");
    gets(s);
    str = s;
    while(strstr(str,"abcd") != NULL)
    {
        str = strstr(str,"abcd");
        count++;
        str += 4;
    }
    printf("%d number of subsets of \"abcd\" exists in %s\n",count,s);
}