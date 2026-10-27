#include <stdio.h>
int main()
{
    float area, b, h;
    printf(" Enter sides of triangle");
    scanf("%f %f", &b, &h);
    area = 0.5 * b * h;
    printf("area of triangle = %f", area);
    return 0;
}
