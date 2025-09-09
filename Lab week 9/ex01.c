#include<stdio.h>
int main(){
    int i = 0;
    int *p;
    p = &i;
    printf("The address of test variable is at: %p\n",&i);
    return 0;

}