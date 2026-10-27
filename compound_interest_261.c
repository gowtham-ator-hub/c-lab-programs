#include <stdio.h>
#include <math.h>
int main()
{
    float principal, rate, time, amount, compoundinterest;
    printf("Enter principal amount : ");
    scanf("%f", &principal);
    printf("Enter rate of interest : ");
    scanf("%f", &rate);
    printf(" Enter time (in Years): ");
    scanf("%f", &time);
    amount = principal * pow(1 + rate / 100, time);
    compoundinterest = amount - principal;
    printf(" Compound interest = %f \n", compoundinterest);
    return 0;
}
