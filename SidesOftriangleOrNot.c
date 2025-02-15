#include<stdio.h>
int main(){
    float a,b,c;
    printf("Enter the value of a");
    scanf("%f",&a);
    printf("Enter the value of b");
    scanf("%f",&b);
    printf("Enter the value of c");
    scanf("%f",&c);
    if(a+b>=c || a+c>=b || b+c>=a){
        printf("These can make a triangle");
    }else{
        printf("These can not make a triangle");
    }
    return 0;
}