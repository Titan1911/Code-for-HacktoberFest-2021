#include <stdio.h>
#include <string.h>

void main()
{
    int a[]={2, 4, 8 ,9 ,1 ,3 ,6}, ele = 3, tmp;
    int low = 0, high = sizeof(a)/sizeof(typeof(a[0])), mid = 0;
    for(int i = 0;i < high - 1; i++)
    {
        for(int j = 0;j < high - 1 - i;j++)
        {
            if(a[j] > a[j+1])
            {
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
    printf("Array after sorting is : ");
    for(int i = 0;i < high;i++)
    printf("%d",a[i]);

    while(high >= low)
    {
        mid = (low + high)/2;
        if(a[mid] > ele)high = mid - 1;
        else if(a[mid] < ele)low = mid + 1;
        else {
            printf("\nElement found at index position : %d\n", mid);
            return;
        }
    }
    printf("\nElement not found\n");
}