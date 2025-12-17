#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int result = (n / 100) * 100 + (n % 10);

    printf("%d\n", result);
    return 0;
}
