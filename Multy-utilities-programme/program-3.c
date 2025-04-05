#include <stdio.h>

int main()
{
    float a, b, c;
    printf("enter first triangle : ");
    scanf("%f", &a);
    printf("enter second triangle : ");
    scanf("%f", &b);
    c = 180 - (a + b);
    printf("third angle is : %.2f", c);
}