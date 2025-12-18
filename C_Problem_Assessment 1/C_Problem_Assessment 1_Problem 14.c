#include <stdio.h>

int main() {
    int num, h, t, o;
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);
    h = num / 100;
    t = (num / 10) % 10;
    o = num % 10;
    printf("%d%d%d\n", o, t, h);
    return 0;
}