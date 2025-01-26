//Sotring pf elements in array.

#include<stdio.h>
void main()
{
    int n,a[10];
    int i,j,b[10],temp;
    printf("Enter the size :");
    scanf("%d",&n);
        
    printf("\nEnter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nBefore Sorting:");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    for(i=0;i<n-1;i++)
    {
     for(j=0;j<n-i-1;j++)
    {
        if(a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    
    }
    }
    printf("\nAfter sorting:");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n min : %d \n max : %d",a[0],a[n-1]);
    
}
