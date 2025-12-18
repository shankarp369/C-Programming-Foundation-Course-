#include <stdio.h>

int main() {
    int num;
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);
    num = (num / 10) * 10 + 2;
    printf("%d\n", num);
    return 0;
}