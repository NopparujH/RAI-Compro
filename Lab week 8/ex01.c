#include <stdio.h>


int main(){
    int i;
    struct profile
    {
        char name[100];
        char surname[100];
        int age;
        float score;

    } student[3];

    for(i=0;i<3;i++){
        printf("\nstudent %d's name: ",i+1);
        scanf("%s" "%s",student[i].name,student[i].surname);
        printf("\nstudent %d's age: ",i+1);
        scanf("%d",&student[i].age);
        printf("\nStudent %d's score: ",i+1);
        scanf("%f", &student[i].score);
    }
    for(i=0;i<3;i++){
        printf("\nstudent %d's name is %s %s,age %d.\n",i+1,student[i].name,student[i].surname,student[i].age);
    }
    return 0;




    
}