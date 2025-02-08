#include<stdio.h>
int main(){
    int y;
    printf("Enter the year:");
    scanf("%d",&y);
    if(y%4==0 || y%400==0){
        printf("This is leap year");
    }else{
        printf("this is not leap year");
    }
    return 0;
}