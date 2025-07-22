#include<stdio.h>
int main(){

    int number;


    printf("Enter a number:");
    scanf("%d",&number);

    if (number>100){
         printf("%d is out of range",number);
    }
    else if((number % 2 == 0)){
        printf("%d is even\n",number);
    }
    else if((number % 2 != 0)){
        printf("%d is odd\n",number);
    }
    return 0;
}