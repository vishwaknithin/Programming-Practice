#include <stdio.h>
int main() {
    int number;   
    printf("Enter a number: ");
    scanf("%d", &number);
    int result=number>>1;
    printf("By dividing by 2: %d\n", result);
    return 0;
}

