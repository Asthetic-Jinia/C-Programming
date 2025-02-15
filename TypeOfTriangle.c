#include<stdio.h>
int main(){
    float a,b,c;
    printf("Enter the value of a ");
    scanf("%f",&a);
    printf("Enter the value of b ");
    scanf("%f",&b);
    printf("Enter the value of c ");
    scanf("%f",&c);
    if(a==b==c){
        printf("Equilateral Triangle");
    }else if((a==b&& a!=c && b!=c) ||(a!=b && a!=c && b==c) ||(a!=b && a==c && b!=c)){
        printf("Isoscales Triangle");
    }else{
        printf("Scalene Triangle");
    }
    
    return 0;

}