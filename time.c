#include<stdio.h>
void main(){
  int race,i;
  float time,t,sum;
  sum=0.0;
  printf("enter number of races: ");
  scanf("%d",&race);
  for (i=1;i<=race;++i)
  {
     printf("enter time of race %d :",i,"in minutes");
     scanf("%f",&time);
     sum+=time;
  }
    t=sum/race;
    printf("your average time is %.2f :",t);



}
