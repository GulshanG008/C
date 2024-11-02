#include <stdio.h>

int main(){
    float P ,R , T;
printf("Enter Principal Amount: ");
scanf("%f",&P);
printf("Enter Interest Rate: ");
scanf("%f",&R);
printf("Enter Duration in Years: ");
scanf("%f",&T);
    float SI = (P*R*T)/100;
    printf("Simple Interest = %0.4f\n", SI);
    return 0;
}