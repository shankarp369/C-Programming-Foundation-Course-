#include <stdio.h>

int main() {
    int num;
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);
    printf("%d\n", num % 10);
    return 0;
}