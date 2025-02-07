#include<stdio.h>
int main(){
    int day,remaining_days;
    int w;
    printf("Enter the no of days:");
    scanf("%d",&day);
    w=day/7;
   // Printf("Week=%d",w);
    remaining_days=day%7;
    printf("%d days are equal to %d week and %d days",day,w,remaining_days);
    return 0;

}