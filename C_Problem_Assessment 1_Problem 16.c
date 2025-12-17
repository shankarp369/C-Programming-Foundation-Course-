#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int thousands = n / 1000;
    int hundreds = (n / 100) % 10;
    int tens = (n / 10) % 10;
    int ones = n % 10;

    int result = thousands * 1000 + hundreds * 100 + ones * 10 + tens;

    printf("%d\n", result);
    return 0;
}
