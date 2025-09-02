#include <stdio.h>


int main(){
    int i,totalM,totalS;
    struct profile
    {
        int m,s;

    } student[4];

    for(i=1;i<=3;i++){
        printf("\nTime input (m:s):" );
        scanf("%d:%d",&student[i].m,&student[i].s);
    }
   for(i=1;i<=3;i++){
    student[i].m = student[i].m*60;
   }
   totalM = student[1].m + student[2].m + student[3].m;
   totalS = student[1].s + student[2].s + student[3].s;
   printf("Total time elasped: %d second(s)",totalM + totalS);
    return 0;
}
