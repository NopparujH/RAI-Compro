#include<stdio.h>
int main(){
    int num[10],n;
    for(n=0;n<10;n++)
    {
        printf("Enter the value[%d]: ",n+1);
        scanf("%d",&num[n]);

    }
    printf("Value in array are: %d,%d,%d,%d,%d,%d,%d,%d,%d,%d",num[0],num[1],num[2],num[3],num[4],num[5],num[6],num[7],num[8],num[9]);
    return 0;
}