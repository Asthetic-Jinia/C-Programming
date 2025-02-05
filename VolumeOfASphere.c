#include<stdio.h>
int main(){
    float r,v;
    printf("Enter the value of r:");
    scanf("%f",&r);
    v=(4*3.14*r*r*r)/3;
    printf("Volume of the sphere=%f",v);
    return 0;
}