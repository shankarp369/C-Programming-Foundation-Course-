#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int tens = (n / 10) % 10;
    int result = n - (tens % 2) * 5;

    printf("%d\n", result);
    return 0;
}
