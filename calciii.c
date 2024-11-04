#include <stdio.h>
int add(int num1,int num2);
int sub(int num1,int num2);
int mul(int num1,int num2);
int div(int num1,int num2);

int main()
{
    int num1;
    int num2;
    char op;
    printf("Enter the opration to be done\n");
    scanf("%c",&op);
    printf("Enter 2 numbers : ");
    scanf("%d %d",&num1,&num2);
    switch (op)
        {
        case '+':
        printf("Sum = %d",add(num1,num2));
        break;
        case '-':
        printf("Difference = %d",sub(num1,num2));
        break;
        case '*':
            printf("product = %d",mul(num1,num2));
            break;
        case '/':
            printf("quotient = %d",div(num1,num2));
            break;

    default:
        printf("Invalid operator");
        }
}
int add(int n1,int n2)
{
    return(n1+n2);
}
int sub(int n1,int n2)
{
    return(n1-n2);
}
int mul(int n1,int n2)
{
    return(n1*n2);
}
int div(int n1,int n2)
{
    return(n1/n2);
}
