#include <stdio.h>
#include <math.h>

int main(){
    int i;
    struct profile
    {
        float x,y;

    } student[2];

    for(i=1;i<=2;i++){
        printf("x%d:",i);
        scanf("%f",&student[i].x);
        printf("y%d:",i);
        scanf("%f",&student[i].y);
    }
    double d = sqrt(pow(student[2].x - student[1].x,2)+ pow(student[2].y - student[1].y,2));
    printf("\nDistance between (%.1f, %.1f) and (%.1f, %.1f) is %.3f unit(s)",student[1].x,student[1].y,student[2].x,student[2].y,d);
    return 0;
}