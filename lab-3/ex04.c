#include<stdio.h>
int main(){

    float number;
    char lol[10],grade;
    float num;
    float numo2;


    printf("Enter your name:");
    scanf("%s",lol);
    printf("Enter your Calculus score:");
    scanf("%f",&number);
    printf("Enter your Physic score:");
    scanf("%f",&num);
    printf("Enter your Science score:");
    scanf("%f",&numo2);

    float avg = (number+num+numo2)/3;

    if (avg >= 80){
        grade = 'A';
    }
    if (avg >= 70 && avg < 80){
        grade = 'B';

    }
    if (avg >= 60 && avg < 70){
        grade = 'C';

    }
    if (avg >= 50 && avg < 60){
        grade = 'D';

    }
    if (avg < 50){
        grade = 'F';
    }   

    printf("%s,your average is,%f,Your grade is %c",lol,avg,grade);


}