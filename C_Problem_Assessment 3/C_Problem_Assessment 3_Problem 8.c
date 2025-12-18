#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int d1 = num / 10;
    int d2 = num % 10;
    if (d1 != d2) {
        printf("Success\n");
    } else {
        printf("Failure\n");
    }
    return 0;
}
