#include<stdio.h>
int main(){
    int count, num, factorail =1;
    printf("Enter a number:");
    scanf("%d",&num);
    for (count=1;count<=num; count++){
        factorail = factorail * count;
    }
    printf("Factorial of %d is %d",num,factorail);
    return(0);
}