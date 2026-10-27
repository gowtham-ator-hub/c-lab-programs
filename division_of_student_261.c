#include <stdio.h>
int main()
{
    float m1, m2, m3, avg;
    printf("Enter marks of three subjects: ");
    scanf("%f %f %f", &m1, &m2, &m3);
    avg = (m1 + m2 + m3) / 3;
    printf("Average = %f\n", avg);
    if (avg >= 60)
        printf("First Division");
    else if (avg >= 50)
        printf("Second Division");
    else if (avg >= 40)
        printf("Third Division");
    else
        printf("Fail");
    return 0;
}
