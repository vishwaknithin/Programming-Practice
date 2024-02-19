
#include <stdio.h>
#include <math.h>
int main() {
    printf("enter the no ");
    int n;
    scanf("%d",&n);
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            printf("NOT A PRIME");
            return 0;
        }
    }
    printf("PRIME NO");
    return 0;
}
