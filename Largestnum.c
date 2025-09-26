#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter the two numbers : ");
    scanf("%d%d",&num1,&num2);
    (num1>num2)?printf("%d is largest",num1):printf("%d is largest",num2);
    return 0;
}