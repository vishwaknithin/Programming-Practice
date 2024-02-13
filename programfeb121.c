#include <stdio.h> 

 #include <string.h> 

 int main() { 

 char name[50];  

int doorNumber;  

char streetName[50];  

char city[50];  

char state[50];  

int pincode;  

printf("Enter your name: ");  

fgets(name, sizeof(name), stdin); 

 printf("Enter your door number: ");
 scanf("%d",&doorNumber);  

getchar(); 

 printf("Enter your street name: ");
 fgets(streetName, sizeof(streetName), stdin);
 printf("Enter your city: ");  

fgets(city, sizeof(city), stdin);  

printf("Enter your state: ");  

fgets(state, sizeof(state), stdin);  

printf("Enter your pincode: "); scanf("%d",&pincode); 

 printf("Name :: "); 

 puts(name);  

printf("Address ::\n");  

printf("%d\n", doorNumber); puts(streetName);  

puts(city);  

puts(state);  

printf("%d\n", pincode);  

return 0; 

 } 
