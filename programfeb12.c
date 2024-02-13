#include<stdio.h>  

int main()  

{  

        char name[30];  

        int age;  

        char highestQual[30];  

        float percentage;  

        printf("Enter name ");  

        scanf("%s",name);  

        printf("Enter age ");  

        scanf("%d",&age);  

        printf("Enter HighestQual ");  

        scanf("%s",highestQual);  

        printf("Enter percentage ");  

        scanf("%f",&percentage);  

        printf("Name    %s\nAge     %d\nHighestQual         %s\nPercentage      %.2f",name,age,highestQual,percentage);  

  

        return 0;  

} 
