#include <stdio.h>
int main() {
    int days, years, weeks, remaining_days;
    printf("Nhập số ngày: ");
    scanf("%d", &days);
    
    years = days / 365;
    weeks = (days % 365) / 7;
    remaining_days = (days % 365) % 7;
    
    printf("%d ngày = %d năm, %d tuần, %d ngày", days, years, weeks, remaining_days);
    return 0;
}
