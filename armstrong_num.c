#include<stdio.h>
void main()
{
    int n,temp,sum=0,rem;
    printf("Enter a number : ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    }
    printf("The sum of digits of a number : %d",sum);
    if(temp==sum)
    {
        printf("\n%d is a armstrong number .",temp);
        
    }
    else
    {
        printf("\n %d is not an armstrong number",temp);
    }
}