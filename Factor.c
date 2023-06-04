#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>

void Factor()
{
    int a,num;
    printf("\nEnter the number :");
    scanf("%d",&num);
    for(a=1;a<=num;a++)
    {
        if(num%a==0)
        {
            printf("\n Factor is %d ",a);
        }
    }
}