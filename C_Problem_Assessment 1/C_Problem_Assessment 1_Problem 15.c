#include <stdio.h>

int main() {
    int num, d1, d2, d3, d4;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);
    
    d1 = num / 1000;      
    d2 = (num / 100) % 10;
    d3 = (num / 10) % 10; 
    d4 = num % 10;        
    
    printf("%d%d%d%d\n", d2, d1, d3, d4);
    
    return 0;
}