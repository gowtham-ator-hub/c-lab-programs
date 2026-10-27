#include <stdio.h>
int main()
{
    int a = 10, b = 3;
    a += b;
    printf("a += b : %d\n", a);
    a -= b;
    printf("a -= b : %d\n", a);
    a *= b;
    printf("a *= b : %d\n", a);
    a /= b;
    printf("a /= b : %d\n", a);
    a %= b;
    printf("a %%= b : %d\n", a);
    return 0;
}
