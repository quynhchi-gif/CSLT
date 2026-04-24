#include <stdio.h>
int main() {
    float c, f;
    // C sang F
    printf("Nhập độ C: ");
    scanf("%f", &c);
    f = (c * 9/5) + 32;
    printf("%.2f độ C = %.2f độ F\n", c, f);
    return 0;
}
