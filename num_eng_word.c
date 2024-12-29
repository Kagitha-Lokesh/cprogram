#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(1<=n && n<=9)
    {
      switch(n)
      {
        case 1:printf("\none");
        break;
        case 2: printf("\nTwo");
        break;
        case 3:printf("\n Three");
        break;
        case 4: printf("\nFour");
        break;
        case 5: printf("\nFive");
        break;
        case 6: printf("\nSix");
        break;
        case 7: printf("\nSeven");
        break;
        case 8: printf("\nEight");
        break;
        case 9: printf("\nNine");
        break;
      }
    }
   else
    {
      printf("%d is greater than 9",n);
    }
    return 0;
}