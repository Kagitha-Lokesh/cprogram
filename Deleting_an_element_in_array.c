//Deleting an element in array

#include <stdio.h>
int main()
{
    int i,j,a[10],n,pos,del,temp,flag=0;
    printf("Enter size :");
    scanf("%d",&n);
    printf("Enter elements : ");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    
    printf("The Elements are :\n");
    for(i=0;i<n;i++)
    {
    printf("\t%d",a[i]);
    }
    printf("\nEnter the element u want to delete : ");
    scanf("%d",&del);
    for(i=0;i<n;i++)
    {
        if(del==a[i])
        {
            flag=1;
            pos=i;
        }
    }
    if(flag==1)
    {
        printf("\nThe %d element is found at position : %d\n",del,pos);
    } 
    else
    {
        printf("\n%dElement not found.",del);
    }
   
    for(i=0;i<n;i++)
    {
        if(pos==i)
        {
           for(i=pos;i<n;i++)
           {
            a[i]=a[i+1];
           }
          
        }
    }
    
    printf("\nUpdated Array :\n");
    for(i=0;i<n-1;i++)
    {
        printf("\t%d",a[i]);
    }
    return 0;
}
