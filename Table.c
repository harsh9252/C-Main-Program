#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
void table()
{
    int num,a;
    printf("Enter the number : ");
    scanf("%d",&num);
    for(a=1;a<=10;a++)
    {
        printf("\n%d*%d=%d",num,a,num*a);
    }
}