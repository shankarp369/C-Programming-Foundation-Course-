#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int first = num / 100;
    int last = num % 100;
    if (first == last) {
        printf("1\n");
    } else {
        printf("0\n");
    }
    return 0;
}
