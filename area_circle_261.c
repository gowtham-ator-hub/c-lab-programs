#include <stdio.h>
int main()
{
    float pie, r, a;
    pie = 3.14;
    printf("Enter the value of radius \n");
    scanf("%f", &r);
    a = pie * r * r;
    printf("Area of circle = %f", a);
    return 0;
}
