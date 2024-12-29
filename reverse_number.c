#include<stdio.h>
void main()
{
    int n,rem,sum,rev=0;
    printf("Enter a Four digit Number :");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("The sum of digits are : %d",rev);
}