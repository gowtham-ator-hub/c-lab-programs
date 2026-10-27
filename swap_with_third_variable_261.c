#include <stdio.h>
int main()
{
    int x, y, temp;
    printf("Enter x value \n");
    scanf("%d", &x);
    printf("Enter y value \n");
    scanf("%d", &y);
    temp = x;
    x = y;
    y = temp;
    printf(" x= %d, y= %d \t", x, y);
    return 0;
}
