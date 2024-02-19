#include <stdio.h>
void swapWithoutFunc(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
void swapWithFunc(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main() {
    int a;
    int b;
    int flag;
    printf("enter 2 numbers ");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("To swap with temporary variable enter 0 else 1");
    int n=scanf("%d",&flag);
    if(flag==1)
    swapWithoutFunc(&a,&b);
    else
    swapWithFunc(&a,&b);
    printf("after swap %d %d",a,b);
    return 0;
}
