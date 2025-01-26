//Array Rotation

#include <stdio.h>

int main() 
{
    int i,j,n,a[10],sw,num,flag=0;
    printf("Enter size : ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The Elements are : \n");
    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }
    printf("\nEnter a Number (i/p) : ");
    scanf("%d",&num);
    printf("\n1.Clock wise Rotation(Given i/p will be first).\n2.Anti clock wise Rotation(Given i/p will be last).\n\n\tChoose the option : ");
    scanf("%d",&sw);
    switch(sw)
    {
        case 1 :
    for(i=0;i<n;i++)
    {
        if(num==a[i])
        {
            flag=1;
        }
    }
    
        if(flag==1)
        {
         
    for(i=a[num-2];i<n;i++)
    {
        printf("\t%d",a[i]);
    }
    for(i=0;i<a[num-2];i++)
    {
        printf("\t%d",a[i]);
    }
        }
        else
        {
            printf("\nElement Not found.");
        }
        break;
        case 2 :
        for(i=0;i<n;i++)
    {
        if(num==a[i])
        {
            flag=1;
        }
    }
    
        if(flag==1)
        {
         
    for(i=n-1;i>a[num-2];i--)
    {
        printf("\t%d",a[i]);
    }
    for(i=0;i<num;i++)
    {
        printf("\t%d",a[i]);
    }
        }
        else
        {
            printf("\nElement Not found.");
        }
    break;
    
    default:printf("Invalid Choice.");
    }

    return 0;
}
