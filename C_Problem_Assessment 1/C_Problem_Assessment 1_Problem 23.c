#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int sum = (n / 10) + (n % 10);
    int result = n - (sum % 2) * 5;

    printf("%d\n", result);
    return 0;
}
