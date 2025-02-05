#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter the value of x:");
    scanf("%d",&x);
    printf("Enter the value of y:");
    scanf("%d",&y);
    z=x;
    x=y;
    y=z;
    printf("x=%d\n",x);
    printf("y=%d",y);
    return 0;

}