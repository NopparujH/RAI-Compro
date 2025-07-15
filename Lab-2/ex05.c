#include<stdio.h>

int main(){


    int number;
    int num;
    float point;
    char name[10];
    char gender[20];
    char uni[20];
    char last[10];

    printf("Enter your Name: ");
    scanf("%s %s",name,last);
    printf("Enter your Age: ");
    scanf("%d",&num);
    printf("Enter your height: ");
    scanf("%f",&point);
    printf("Enter your University name: ");
    scanf("%s",uni);


    printf("Hi! Everyone. This is K.%s from KMITL. %.1f cm tall.\n",name,point);

}