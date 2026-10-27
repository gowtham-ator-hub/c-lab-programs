#include <stdio.h>
int main()
{
    float c, f;
    printf("enter temperature in fahrenheit scale \n");
    scanf("%f", &f);
    c = (f - 32) * (5.0 / 9.0);
    printf(" temperature in celsius scale = %f", c);
    return 0;
}
