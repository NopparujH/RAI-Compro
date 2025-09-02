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

    for(i=1;i<=3;i++){
        printf("\nstudent %d's name: ",i);
        scanf("%s" "%s",student[i].name,student[i].surname);
        printf("\nstudent %d's age: ",i);
        scanf("%d",&student[i].age);
        printf("\nStudent %d's score: ",i);
        scanf("%f", &student[i].score);
    }
    if(student[1].score >= student[2].score && student[1].score >= student[3].score){
        printf("The highest scores belongs to %s %s at %.1f scores!", student[1].name,student[1].surname,student[1].score);
    } else if(student[2].score >= student[1].score && student[2].score >= student[3].score){
        printf("The highest scores belongs to %s %s at %.1f scores!", student[2].name,student[2].surname,student[2].score);
    } else{
        printf("The highest scores belongs to %s %s at %.1f scores!", student[3].name,student[3].surname,student[3].score);
    }
    return 0;




    
}