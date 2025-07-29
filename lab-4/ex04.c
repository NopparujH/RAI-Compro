#include<stdio.h>
int main(){
    
    int base,num=0;
    printf("Enter a number;");
    scanf("%d", &base);
    printf("\nMultiplication Table");
    while(num<=12){
        printf("%4d * %-2d = %-3d\n", base, num, base*num);
        num++;
    }

    return 0;
}