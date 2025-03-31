#include<stdio.h>
int main(){
    float fahrenheit, celsius;

    printf("Enter celsius : ");
    scanf("%f",&celsius);

    fahrenheit = (9.0 / 5.0 * celsius) + 32;
    printf("%.2f",fahrenheit);
}