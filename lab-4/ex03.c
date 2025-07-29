#include<stdio.h>
#include<stdlib.h>
int main(){

    int sum = 0, num, count=1;
    do
    {
        printf("Enter the number:");
        scanf("%d", &num);
        count++;
        
        if(num % 2 == 0 && num!=0){
            printf("%d is even\n", num);
        }
        else if(num ==0){
            printf ("Exiting Program... Bye\n");
            exit(0);
        }
            else {
            printf("%d is odd\n", num);
        }   
    } while (count <= 10);

   return 0;
}