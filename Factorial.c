#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
void Factiorial()
{
     int num;
    int a,r=1;
    printf("Enter the number");
    scanf("%d",&num);
    for(a=1;a<=num;a++)
    {
        r=r*a;
       
    }
     printf("The Factorial of %d is %d",num,r);

}