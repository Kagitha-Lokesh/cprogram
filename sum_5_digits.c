#include<stdio.h>
void main()
{
    int n,sum=0,rem;
    printf("Enter a Five digit NUmber :");
    scanf("%d",&n);
    if(10000<=n && n<= 99999)
    {
        while(n>0)
        {
            rem=n%10;
            sum=sum+rem;
            n=n/10;
        }
        printf("The sum of digits is : %d",sum);
    }
    else
    {
        printf("Invalid input \n Enter Five digit NUmber");
    }
}