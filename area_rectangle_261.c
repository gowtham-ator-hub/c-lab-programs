#include <stdio.h>
int main()
{
    int a, b, area;
    printf(" Enter the values of length, breadth \n");
    scanf("%d %d", &a, &b);
    area = a * b;
    printf("Area of rectangle = %d", area);
    return 0;
}
