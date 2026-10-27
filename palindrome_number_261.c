#include <stdio.h>
int main() {
    int n, x, rev = 0, digit;
    printf(" Enter a number : ");
    scanf("%d", &n);
    x = n;
    while (n != 0) {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    if (x == rev)
        printf(" Palindrome ");
    else
        printf(" Not a palindrome ");
    return 0;
}
