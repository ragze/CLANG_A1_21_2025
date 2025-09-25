#include <stdio.h>
int main() {
    int celsius;
    
    scanf("%d",&celsius);
    printf("%.2f",(celsius*9.0/5.0+32));
    return 0;
}