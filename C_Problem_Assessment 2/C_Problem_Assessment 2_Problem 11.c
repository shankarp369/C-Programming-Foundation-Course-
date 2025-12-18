#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int d1 = num / 10;
    int d2 = num % 10;
    if (d2 <= d1) {
        printf("0\n");
    } else {
        printf("1\n");
    }
    return 0;
}
