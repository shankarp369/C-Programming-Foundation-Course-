#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int hundreds = n / 100;
    int ones = n % 10;

    int result = n - ((hundreds % 2) * (ones % 2)) * 5;

    printf("%d\n", result);
    return 0;
}
