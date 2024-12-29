#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,count=0;
    printf("Enter a number :");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("prime numner.");
    }
    else 
    {
        printf("non prime numner.");
    }
}