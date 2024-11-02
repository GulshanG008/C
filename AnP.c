#include <stdio.h>

int main()
{
    int l, b;
    printf("Enter the length: ");
    scanf("%d",&l);
    printf("Enter the breadth: ");
    scanf("%d",&b);
    printf("Area of rectangle is : %d\n", l * b);
    printf("Perimeter of rectangle is: %d\n", 2*(l + b));
    return 0;
}