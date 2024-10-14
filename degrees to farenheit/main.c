#include <stdio.h>
int main()
{
    float fahrenheit;

    printf("Enter temperature in fahrenheit\n");
    scanf("%f", &fahrenheit);

    float celsius = (fahrenheit - 32) * 5/9;

    printf("The temperature in fahrenheit is %.2f\n", celsius);
    return 0;
}
