#include <stdio.h>
int main() {
    float a, b, product;
    printf("Nhập hai số thực: ");
    scanf("%f %f", &a, &b);
    product = a * b;
    printf("Tích là: %.2f", product);
    return 0;
}
