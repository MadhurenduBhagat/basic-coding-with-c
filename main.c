#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fahrenheit, celsius;
    printf("enter the temperature in celsius\n");
    scanf("%f",&celsius);
    fahrenheit= (celsius*(9/5))+32;
    printf("the temperature in fahrenheit is %f F",fahrenheit);
    return 0;
}
