#include <stdio.h>
int main()
{
    float percentage;
    printf("Enter percentage: ");
    scanf("%f", &percentage);
    if (percentage >= 70)
        printf("Distinction");
    else if (percentage >= 60)
        printf("First Class");
    else if (percentage >= 50)
        printf("Second Class");
    else if (percentage >= 40)
        printf("Third Class");
    else
        printf("Fail");
    return 0;
}
