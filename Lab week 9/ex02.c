#include<stdio.h>
int main(){
    int a = 0;
    int b = 5;
    int *pa = &a;
    int *pb = &b;
    printf("Before reverse: a = %d, b = %d\n", a ,b);
    int UwU;
    UwU = *pa;
    *pa = *pb;
    *pb = UwU;
    printf("After reverse: a = %d, b = %d\n", a ,b);
    return 0;

}