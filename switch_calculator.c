#include<stdio.h>
void main()
{
    float a,b;
    int op;
    printf("Enter the value of a : ");
    scanf("%f",&a);
    printf("Enter the value of b : ");
    scanf("%f",&b);
    printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    printf("\nChoose the operationn you want to perform:");
    scanf("%d",&op);
    switch(op){
        case 1:
            printf("Addition of %.2f & %.2f is : %.2f",a,b, a+b);
            break;
        case 2:
            printf("Subtraction of %.2f & %.2f is : %.2f",a,b, a-b);
            break;
        case 3:
            printf("Multiplication of %.2f & %.2f is : %.2f",a,b, a*b);
            break;
        case 4:
            printf("Division of %.2f & %.2f is : %.2f",a,b, a/b);
            break;
        default:
            printf("Enter Valid Input.");
    }
}
