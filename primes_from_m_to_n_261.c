#include <stdio.h>
int main()
{
    int m, n, i, j, flag;
    printf("Enter M and N values: ");
    scanf("%d %d", &m, &n);
    printf("Prime numbers from %d to %d: ", m, n);
    for (i = m; i <= n; i++)
    {
        if (i < 2)
            continue;
        flag = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("%d ", i);
    }
    return 0;
}
