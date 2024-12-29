#include<stdio.h>
void main()
{
    int n,temp,sum,rem,rev=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
   
    if(temp==rev)
    {
        printf("\n%d is a palindrome number .",temp);
        
    }
    else
    {
        printf("\n %d is not an palindrome number",temp);
    }
}