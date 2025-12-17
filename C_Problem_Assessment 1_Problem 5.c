#include <stdio.h>

int main() {
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);
    printf("%.2f\n", num / 8);
    return 0;
}