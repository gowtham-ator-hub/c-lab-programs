#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, d, r1, r2, real, imag;
    printf("Enter the values of a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and different\n");
        printf("Root1 = %f\nRoot2 = %f", r1, r2);
    }
    else if (d == 0)
    {
        r1 = -b / (2 * a);
        printf("Roots are real and equal\n");
        printf("Root1 = Root2 = %f", r1);
    }
    else
    {
        real = -b / (2 * a);
        imag = sqrt(-d) / (2 * a);
        printf("Roots are imaginary\n");
        printf("Root1 = %f + %fi\nRoot2 = %f - %fi", real, imag, real, imag);
    }
    return 0;
}
