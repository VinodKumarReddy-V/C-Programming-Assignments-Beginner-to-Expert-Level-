//1. To accept 2 input vlues from user end and Perform Arithmetic operations.

#include<stdio.h>
void main()
{
    int x,y,sum,sub,mul,div,rem;
    printf("Enter X Y values");
    scanf("%d%d",&x,&y);
    sum = x + y;
    sub = x - y;
    mul = x * y;
    div = x / y;
    rem = x % y;

    printf("Sum of %d  ,%d = %d",x,y,sum);
    printf("\nSub of %d  ,%d = %d",x,y,sub);
    printf("\nMul of %d  ,%d = %d",x,y,mul);
    printf("\nDivide of %d  ,%d = %d",x,y,div);
    printf("\nReminder of %d  ,%d = %d",x,y,rem);


}


#include<stdio.h>
void main()
{
    int x,y;
    printf("Enter X Y values");
    scanf("%d%d",&x,&y);
    
    printf("Sum of %d  ,%d = %d",x,y,(x + y));
    printf("\nSub of %d  ,%d = %d",x,y,(x - y));
    printf("\nMul of %d  ,%d = %d",x,y,(x * y));
    printf("\nDivide of %d  ,%d = %d",x,y,(x / y));
    printf("\nReminder of %d  ,%d = %d",x,y,(x % y));


}

