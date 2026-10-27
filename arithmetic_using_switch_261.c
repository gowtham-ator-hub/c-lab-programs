#include <stdio.h>
int main()
{
    float a, b;
    char op;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    switch (op)
    {
        case '+': printf("%f + %f = %f", a, b, a + b);
                  break;
        case '-': printf("%f - %f = %f", a, b, a - b);
                  break;
        case '*': printf("%f * %f = %f", a, b, a * b);
                  break;
        case '/': if (b != 0)
                      printf("%f / %f = %f", a, b, a / b);
                  else
                      printf("Division by zero is not possible");
                  break;
        default: printf("Invalid operator");
    }
    return 0;
}
