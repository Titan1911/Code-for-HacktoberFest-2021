//harsha-hl 

#include <stdio.h>
void main()
{
    int n, flag = 0;
    printf("Enter number: ");
    scanf("%d",&n); 
    for(int i = 1;i <= n; i++)
    {
        if(n % i == 0)flag++;
    }
    if(flag == 2)printf("Prime number\n");
    else printf("Not a prime Number\n");
}