#include<stdio.h>
int main(){
    int b[] = {3,1,2,4,5,6};
    int n = sizeof(b)/ sizeof(b[0]);
    int max_val = *b;
    for (int i = 1; i<n; i++){
        if ((b[i])>max_val){
            max_val = (b[i]);
        }
    }
    printf("Max value: %d\n", max_val);

    return 0;
}