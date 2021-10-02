#include <stdio.h>

void rec(int);

void main()
{
    int n;
    printf("Enter number\n");
    scanf("%d",&n);
    rec(n);
}

void rec(int n)
{
    if(n<0)return;
    printf("%d ",n);
    rec(n-1);
}