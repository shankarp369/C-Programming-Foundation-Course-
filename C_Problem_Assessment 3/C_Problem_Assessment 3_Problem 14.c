#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int first = num / 100;
    int last = num % 100;
    if (first == last) {
        printf("Success\n");
    } else {
        printf("Failure\n");
    }
    return 0;
}
