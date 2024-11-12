// Finding the maximum number betwween two nmbers.
#include <stdio.h>

int main()
{
    int a, b;
    /*   printf("Enter first number: ");
       scanf("%d",&a);
       printf("Enter second number: ");
       scanf("%d",&b);
       if(a>b){
           printf("Maiximum number is : %d",a);
       }
       else if (a==b){
           printf("Both the numbers are equal.");
       }
       else {
           printf("Maximum number is : %d",b);
       }
       return 0;
   }*/
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    if (a > b)
    {
        printf("The greater number is : %d", a);
    }
    else if (a == b)
    {
        printf("Both the numbers are equal");
    }
    else
    {
        printf("The greater number is : %d", b);
    }
    return 0;
}