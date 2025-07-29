#include<stdio.h>
int main(){

    int sum = 0, num, count = 1;
    while (count <= 10) {

        printf("%d.Enter the number: ",count);
        scanf("%d", &num);
        sum= sum + num;
        count++;
    }

    printf("Total sum is %d\n", sum);

    return 0;
}