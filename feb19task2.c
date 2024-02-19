#include <stdio.h>
void decToBin(int n, int binary[], int *index) {
    while (n) {
        binary[*index]=n%2;
        n=n/2;
        (*index)++;
    }
}
int main() {
    int n;
    scanf("%d",&n);
    if(n==0)
    {
       printf("0");
       return 0;
    }
    int index=0;
    int binary[31];
    decToBin(n,binary,&index);
    for (int i=index-1;i>=0;i--) {
        printf("%d",binary[i]);
    }
    return 0;
}

