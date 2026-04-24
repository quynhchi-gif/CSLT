#include <stdio.h>
int main() {
    float feet, meter;
    printf("Nhập số feet: ");
    scanf("%f", &feet);
    meter = feet * 0.3048;
    printf("%.2f feet = %.2f meter", feet, meter);
    return 0;
}
