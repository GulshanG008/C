#include <stdio.h>
int main() {
int a = 5,b = 4,temp;
temp = a;
a = b;
b = temp;
printf("a = %d, b = %d\n", a, b);
return 0;
}
