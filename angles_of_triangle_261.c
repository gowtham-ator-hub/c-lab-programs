#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, A, B, C;
    float pi = 3.14159265;
    printf("Enter the three sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    A = acos((b * b + c * c - a * a) / (2 * b * c)) * 180 / pi;
    B = acos((a * a + c * c - b * b) / (2 * a * c)) * 180 / pi;
    C = 180 - A - B;
    printf("Angle A = %f degrees\n", A);
    printf("Angle B = %f degrees\n", B);
    printf("Angle C = %f degrees\n", C);
    return 0;
}
