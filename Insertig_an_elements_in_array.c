//Insertig an elements in array

#include<stdio.h>
void main()
{
    int a[10],n,i,j,in,temp;
    printf("Enter Size : ");
    scanf("%d",&n);
    printf("\nEnter the elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the value to be inserted :");
    scanf("%d",&in);
    a[n]=in;
    printf("\n%d is added in array , befor sorting : \n",in);
    for(i=0;i<n+1;i++)
    {
        printf("\t%d",a[i]);
    }
    for(i=n+1;i>=0;i--)
    {
        for(j=n-1;j>=0;j--)
        {
            if(a[j+1]<a[j])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
        
    }
    printf("\n%d is added in array , After sorting : \n",in);
    for(i=0;i<n+1;i++){
        printf("\t%d",a[i]);
    }
        
    
    
}
