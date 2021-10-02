#include <stdio.h>
#include <string.h>

void main()
{
    int a[]={4,3,1,5,2},tmp;
    int x = sizeof(a)/sizeof(typeof(a[0]));
    for(int i = 0;i < x - 1; i++)
    {
        for(int j = 0;j < x - 1 - i;j++)
        {
            if(a[j] > a[j+1])
            {
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
    printf("Second highest number is %d\n",a[x - 2]);
}