#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    n = n - (n % 2) * 5;

    printf("Result: %d\n", n);

    return 0;
}
