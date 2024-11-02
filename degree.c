#include <stdio.h>

float fahrenheit_to_celsius(float f)
{
    return ((f-32.0)*5.0 /9.0);
}
int main(){
     float f = 40;
     printf("Temperature in Degree Celsius : %0.2f\n\n",fahrenheit_to_celsius(f));

    float a;
    printf("Enter degree in Fahrenheit: ");
    scanf("%f",&a);
    float b = ((a-32.0)*5.0/9.0);
    printf("The degree in Celsius from Fahrenheit is: %0.2f",b);
    return 0;
}