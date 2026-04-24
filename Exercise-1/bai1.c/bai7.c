#include <stdio.h>
int main() {
    char c;
    printf("Nhập một ký tự: ");
    scanf(" %c", &c);
    printf("Giá trị ASCII của %c là: %d", c, c);
    return 0;
}
