#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int sum = (n / 10) + (n % 10);

    printf("%d\n", sum);
    return 0;
}
