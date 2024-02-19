#include <stdio.h>
int main() {
    float math, physics, chemistry;
    printf("Enter marks for Math: ");
    scanf("%f",&math);
    printf("Enter marks for Physics: ");
    scanf("%f",&physics);
    printf("Enter marks for Chemistry: ");
    scanf("%f",&chemistry);
    float totalMarks=math+physics+chemistry;
    float percentage=(totalMarks/300)*100;
    printf("Percentage: %.2f%%\n", percentage);
    if (percentage > 90) {
        printf("Grade: A\n");
    } else if (percentage > 70) {
        printf("Grade: B\n");
    } else if (percentage > 50) {
        printf("Grade: C\n");
    } else {
        printf("Grade: D\n");
    }
    return 0;
}

