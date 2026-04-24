#include <stdio.h>
int main() {
    float a, area;
    printf("Nhập cạnh hình vuông: ");
    scanf("%f", &a);
    area = a * a;
    printf("Diện tích hình vuông: %.2f", area);
    return 0;
}
