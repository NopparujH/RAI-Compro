#include<stdio.h>
int main(){

    int sum = 0, num, count;
    for (count = 1; count <= 10; count++) {

        printf("%d.Enter the number: ",count);
        scanf("%d", &num);
        sum= sum + num;
    }

    printf("Total sum is %d\n", sum);
    float avg = sum/10.0;
    printf("Average is %.2f\n", avg);
    return 0;
}