#include <stdio.h>

int main() {
    int num, t, o;
    printf("Enter a 2-digit number: ");
    scanf("%d", &num);
    t = num / 10;
    o = num % 10;
    printf("%d%d\n", o, t);
    return 0;
}