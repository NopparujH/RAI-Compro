#include<stdio.h>

int main(){
    int num[6],sum,max,i,j;

    for(i=1;i<=5;i++){
        printf("Enter the marks of student %d : ",i);
        scanf("%d",&num[i]);
        sum = sum+num[i];
    }
    max = num[1];
    
    for(j=1;j<=5;j++){
        if(num[j]>max){
            max = num[j];
        }
        
    }
    printf("Total Marks: %d\n",sum);
    printf("Highest Marks: %d\n",max);
}