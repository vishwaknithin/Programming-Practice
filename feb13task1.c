#include <stdio.h>
int main() {
    // Write C code here
    int n;
    printf("enter number ");
    scanf("%d",&n);
    int factorial=1;
    while(n)
    {
        factorial*=n;
        n--;
    }
    printf("FACTORIAL IS %d",factorial);
}
