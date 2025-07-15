#include<stdio.h>

int main(){

    float point;
    int number;
    char name[20];

    printf("Please enter an integer value: ");
    scanf("%d",&number);
    printf("You entered %d",number);
    printf("\nPlase enter a float value: ");
    scanf("%f",&point);
    printf("You entered %.2f",point);
    printf("\nPlease enter a character: ");
    scanf("%s",name);
    printf("You entered %s\n",name);


}