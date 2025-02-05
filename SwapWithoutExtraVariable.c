#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the value of x:");
    scanf("%d",&x);
    printf("Enter the value of y:");
    scanf("%d",&y);
    x=y;
    y=x;
    printf("x=%d\n",x);
    printf("y=%d",y);
    return 0;

}