#include<stdio.h>
void main()
{
    int i,j;
    char ch,str[100],pos=0;
    printf("Enter a string :  ");
    scanf("%s",str);
    printf("Patterns for '%s' :\n" ,str);
    //String Seperation
    while (str[pos]!='\0')
    {
        printf("\nPattern of ' %c ' : \n\n",str[pos]);
        ch=str[pos];
        pos++;

    
    //Logic Begins
    if (ch=='a'||ch=='A')
    {
        for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            if(j==3-i||j==i+3||i==3||(j==0&&(i==4||i==5||i==6))||(j==6&&(i==4||i==5||i==6)))
            {
                printf("*");
            }
            else
            {
               printf(" ");
            }
            
        }
        printf("\n");
    }

    }
    else if (ch=='b'||ch=='B')
    {
            for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            if((i==0&&j!=6)||(i==3&&j!=6)||(i==6&&j!=6)||j==0||(j==6&&i!=3&&i!=0&&i!=6))
            {
                printf("*");
            }
            else
            {
               printf(" ");
            }
            
        }
        printf("\n");
    }
    }
    else if (ch=='c'||ch=='C')
    {
            for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            if((j==0&&(i==2||i==3||i==4))||(i==0&&(j==3||j==4||j==5||j==6))||(i==6&&(j==3||j==4||j==5||j==6))||(i==1&&j==1)||(i==5&&j==1))
            {
                printf("*");
            }
            else
            {
               printf(" ");
            }
            
        }
        printf("\n");
    }
    }
    else if (ch=='d'||ch=='D')
    {
            for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            if(j==0||(i==0&&(j==1||j==2||j==3)||(i==6&&(j==1||j==2||j==3)))||(j==6&&(i==2||i==3||i==4))||(i==1&&j==5)||(i==5&&j==5))
            {
                printf("*");
            }
            else
            {
               printf(" ");
            }
            
        }
        printf("\n");
    }
    }
    else if (ch=='e'||ch=='E')
    {
            for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            if(i==6||i==3||j==0||i==0){
                printf("*");
            }
            else
            {
               printf(" ");
            }
            
        }
        printf("\n");
        }

    }
    else if (ch=='f'||ch=='F')
    {
            for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            if(i==3||j==0||i==0){
                printf("*");
            }
            else
            {
               printf(" ");
            }
            
        }
        printf("\n");
        }
 
    }
    else if (ch=='g'||ch=='G')
    {
            for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            if(i==6||(j==0&&(i!=0&&i!=1))||(i==0&&(j!=0&&j!=1&&j!=6)||(i==1&&j==1))||(j==6&&(i!=0&&i!=2&&i!=3))||i==4&&(j==3||j==4||j==5))
            {
                printf("*");
            }
            else
            {
               printf(" ");
            }
            
        }
        printf("\n");
    }
    }
    else if (ch=='h'||ch=='H')
    {
            for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            if(j==6||j==0||i==3){
                printf("*");
            }
            else
            {
               printf(" ");
            }
            
        }
        printf("\n");
        }

    }
    else if (ch=='i'||ch=='I')
    {
            for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            if(i==6||i==0||j==3){
                printf("*");
            }
            else
            {
               printf(" ");
            }
            
        }
        printf("\n");
        }

    }
    else if (ch=='j'||ch=='J')
    {
            for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            if(i==0&&(j!=6)||(j==4&&(i!=6))||(i==6&&(j==1||j==2||j==0)))
            {
                printf("*");
            }
            else
            {
               printf(" ");
            }
            
        }
        printf("\n");
    }
    }
    else if (ch=='k'||ch=='K')
    {
            for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            if(j==3-(i-1)||i==(j-1)+3||j==0)
            {
                printf("*");
            }
            else
            {
               printf(" ");
            }
            
        }
        printf("\n");
        }

    }
    else if (ch=='l'||ch=='L')
    {
            for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            if(i==6||j==0){
                printf("*");
            }
            else
            {
               printf(" ");
            }
            
        }
        printf("\n");
        }

    }
    else if (ch=='m'||ch=='M')
    {
            for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            if(j==0||j==6||(i==j&&j<=3)||(j==6-i&&j>3))
            {
                printf("*");
            }
            else
            {
               printf(" ");
            }
            
        }
        printf("\n");
    }
    }
    else if (ch=='n'||ch=='N')
    {
            for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            if(j==0||j==6||i==j)
            {
                printf("*");
            }
            else
            {
               printf(" ");
            }
            
        }
        printf("\n");
    }
    }
    else if (ch=='o'||ch=='O')
    {
            for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            if(((j==0||j==6)&&i!=0&&i!=6)||((i==0||i==6)&&j!=0&&j!=6))
            {
                printf("*");
            }
            else
            {
               printf(" ");
            }
            
        }
        printf("\n");
    }
    }
    else if (ch=='p'||ch=='P')
    {
            for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            if(j==0||((i==0||i==4)&&(j!=6&&j!=5))||(j==6&&i<4&&i!=0))
            {
                printf("*");
            }
            else
            {
               printf(" ");
            }
            
        }
        printf("\n");
    }
    }
    else if (ch=='q'||ch=='Q')
    {
            for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            if((i==1&&j>1&&j<5)||(i==5&&j>1&&j<5)||(j==1&&i>1&&i<5)||(j==5&&i>1&&i<5)||(i==j&&j>2))
            {
                printf("*");
            }
            else
            {
               printf(" ");
            }
            
        }
        printf("\n");
    }
    }
    else if (ch=='r'||ch=='R')
    {
                    for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            if(j==0||((i==0||i==3)&&(j!=6&&j!=5))||(j==6&&i<3&&i!=0)||i==j+2)
            {
                printf("*");
            }
            else
            {
               printf(" ");
            }
            
        }
        printf("\n");
    }
    }
    else if (ch=='s'||ch=='S')
    {
                    for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            if((i==0||i==3||i==6)||(j==0&&i<=3)||(j==6&&i>=3))
            {
                printf("*");
            }
            else
            {
               printf(" ");
            }
            
        }
        printf("\n");
    }
    }
    else if (ch=='t'||ch=='T')
    {
                    for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            if(i==0||j==3)
            {
                printf("*");
            }
            else
            {
               printf(" ");
            }
            
        }
        printf("\n");
    }
    }
    else if (ch=='u'||ch=='U')
    {
                    for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            if(((j==0||j==6)&&i<5)||(i==5&&(j>0&&j<=5)))
            {
                printf("*");
            }
            else
            {
               printf(" ");
            }
            
        }
        printf("\n");
    }
    }
    else if (ch=='v'||ch=='V')
    {
                    for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            if((i==j&&i<=3)||(j==6-i&&i<=3))
            {
                printf("*");
            }
            else
            {
               printf(" ");
            }
            
        }
        printf("\n");
    }
    }
    else if (ch=='w'||ch=='W')
    {
                    for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            if(j==0||j==6||(j==6-i&&i>=3)||(i==j&&i>=3))
            {
                printf("*");
            }
            else
            {
               printf(" ");
            }
            
        }
        printf("\n");
    }
    }
    else if (ch=='x'||ch=='X')
    {
                    for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            if(i==j||j==6-i)
            {
                printf("*");
            }
            else
            {
               printf(" ");
            }
            
        }
        printf("\n");
    }
    }
    else if (ch=='y'||ch=='Y')
    {
                    for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            if((i==j&&i<=3)||(j==6-i&&i<=3)||(j==3&&i>=3))
            {
                printf("*");
            }
            else
            {
               printf(" ");
            }
            
        }
        printf("\n");
    }
    }
    else if (ch=='z'||ch=='Z')
    {
                    for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            if(i==0||i==6||j==6-i)
            {
                printf("*");
            }
            else
            {
               printf(" ");
            }
            
        }
        printf("\n");
    }
    
    
    }
    else{
        printf("Invalid Input.");
    }
    }
}