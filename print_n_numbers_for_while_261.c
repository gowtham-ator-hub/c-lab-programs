#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Using for loop:\n");
    for (i = 1; i <= n; i++)
        printf("%d ", i);
    printf("\nUsing while loop:\n");
    i = 1;
    while (i <= n)
    {
        printf("%d ", i);
        i++;
    }
    return 0;
}
