#include<stdio.h>
int main(){
    int x,y,z,X,Y;
    printf("Enter the value of x:");
    scanf("%d",&x);
    printf("Enter the value of y:");
    scanf("%d",&y);
    z=x+y;
    X=z-x;
    Y=z-y;
    printf("x=%d\n",X);
    printf("y=%d",Y);
    return 0;

}