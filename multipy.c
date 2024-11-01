#include <stdio.h>
float multiply(float a, float b)
{
    return a * b;
}
int main(){
float A = 3.45, B = 4.55, product;
product = multiply(A,B);
printf("Product of enterd numbers is: %.3f",product);
    return 0;
}