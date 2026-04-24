#include <stdio.h>
int main() {
    float r, area;
    printf("Nhập bán kính: ");
    scanf("%f", &r);
    area = 3.14159 * r * r;
    printf("Diện tích hình tròn: %.2f", area);
    return 0;
}
