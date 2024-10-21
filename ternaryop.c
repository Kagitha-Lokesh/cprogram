#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the any two numbers : ");
    scanf("%d%d%",&a,&b);
    (a > b) ? printf("%d is greater than %d",a,b)
    : printf("%d is greater than %d",b,a);

}
