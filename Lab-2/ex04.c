#include<stdio.h>

int main(){


    int number;
    int num;
    float point;
    float poi;
    char name[20];
    char gender[20];
    char uni[20];


    printf("Enter your Name: ");
    scanf("%s",name);
    printf("Enter your Student ID: ");
    scanf("%d",&num);
    printf("Enter your Programming score: ");
    scanf("%d",&number);
    printf("Enter your Physics score: ");
    scanf("%f",&point);
    printf("Enter your Calculus score: ");
    scanf("%f",&poi);

    float x = (point+poi+number)/3;
    printf("Hi M(%d)! Your GPA is %.2f\n",num,x);
}
