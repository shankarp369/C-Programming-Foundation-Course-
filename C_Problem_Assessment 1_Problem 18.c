#include <stdio.h>

int main() {
    int num;
    printf("Enter a 2-digit number: ");
    scanf("%d", &num);
    num = 10 + (num % 10);
    printf("%d\n", num);
    return 0;
}