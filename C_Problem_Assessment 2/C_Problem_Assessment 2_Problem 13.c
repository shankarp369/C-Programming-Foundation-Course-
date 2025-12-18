#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int d0 = num % 10;
    int d1 = (num / 10) % 10;
    if (d1 == d0) {
        printf("1\n");
    } else {
        printf("0\n");
    }
    return 0;
}
