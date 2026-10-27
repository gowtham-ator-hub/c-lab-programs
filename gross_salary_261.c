#include <stdio.h>
int main()
{
    float basic, da, hra, gross;
    printf("Enter basic pay: ");
    scanf("%f", &basic);
    da = basic * 40 / 100;
    hra = basic * 20 / 100;
    gross = basic + da + hra;
    printf("DA = %f\n", da);
    printf("HRA = %f\n", hra);
    printf("Gross salary = %f\n", gross);
    return 0;
}
