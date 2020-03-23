//1.To accept input from user end and display Name and Age.
#include<stdio.h>
void main()
{
    int age;
    char str1[10];
    printf("Enter U name ");
    scanf("%s",&str1);
    printf("Enter U r Age ");
    scanf("%d",&age);
    printf("My name is %s and Age =%d",str1,age);
}
//2.To accept 3 values from user end and do sum of 3 numbers and display Results.
#include<stdio.h>
void main()
{
    int a,b,c,Total;
    printf("Enter a b c Values ");
    scanf("%d%d%d",&a,&b,&c);
    Total = a + b +c ;
    printf("Sum of 3 numbers = %d",Total);
  
}   