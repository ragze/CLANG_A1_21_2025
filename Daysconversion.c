#include <stdio.h>
int main() {
    int days, years, weeks, remaining_days;
    
    scanf("%d", &days);
    
    printf("Years: %d\n", days/365);
    printf("Weeks: %d\n", ((days%365)/7));
    printf("Days: %d", (days % 365) % 7);
    
    return 0;
}