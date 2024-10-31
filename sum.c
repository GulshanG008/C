#include <stdio.h>

int main(){
    int x=4,y=5;
    int sum=x+y;
    printf("The sum of %d and %d is %d\n\n",x,y,sum);

    int a,b,c;
    printf("Enter two integers:");
    scanf("%d",&a);
    scanf("%d",&b);
    c=a+b;
    printf("The sum of %d and %d is %d",a,b,c);
    return 0;
}