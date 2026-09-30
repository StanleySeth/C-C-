#include <stdio.h>

int sum1 = 100 + 50;        // 150 (100 + 50)
int a = 20;
int b = 6;

int main(void) {
    int sum2 = sum1 + 250;
    int sum3 = sum2 + 250;

    int x = a + b;
    int y = a - b;
    int z = a * b;
    int p = a / b;
    int q = a % b;
    

    printf("Sum1: %d\n", sum1);
    printf("Sum2: %d\n", sum2);
    printf("Sum3: %d\n", sum3);
    printf("==============================\n");
    printf("Addition: %d\n", x);
    printf("Subtrction: %d\n", y);
    printf("Multiplication: %d\n", z);
    printf("Division: %d\n", p);
    printf("Modulus: %d\n", q);
    return 0;
}