#include<stdio.h>

int main(){


    int number;
    int num;
    float point;
    char name[20];
    char gender[20];
    char uni[20];

    printf("Enter your Name: ");
    scanf("%s",name);
    printf("Enter your Age: ");
    scanf("%d",&num);
    printf("Enter your height: ");
    scanf("%f",&point);
    printf("Enter your weight: ");
    scanf("%d",&number);
    printf("Enter your gender: ");
    scanf("%s",gender);
    printf("Enter your Education Qualification: ");
    scanf("%s",uni);

    printf("\nName: %s",name);
    printf("\tAge: %d",num);
    printf("\tGender: %s\n",gender);
    printf("Height: %.1f",point);
    printf("\tWeight: %d\n",number);
    printf("Education: %s\n",uni);






    return 0;
}