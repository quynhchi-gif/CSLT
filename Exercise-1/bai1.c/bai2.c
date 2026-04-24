#include <stdio.h>
int main() {
    int a, b, temp;
    printf("Nhập a và b: ");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("Sau khi hoán đổi: a = %d, b = %d", a, b);
    return 0;
}
