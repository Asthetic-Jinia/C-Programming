#include<stdio.h>
int main(){
    float x;
    printf("The value of x");
    scanf("%f",&x);
    int y;
    y=x;
    printf("The fractional part is%2f",(x-y));
    return 0;

}