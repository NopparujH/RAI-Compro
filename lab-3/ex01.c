#include<stdio.h>
int main(){

    int number;
    int num;

    printf("Enter a number:");
    scanf("%d",&number);
    printf("Enter a number:");
    scanf("%d",&num);

    if (number == num){
        printf("Match\n");
    }
    else{
        printf("Does not match. Try again\n");
    }

}