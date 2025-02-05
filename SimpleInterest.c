#include<stdio.h>
int main(){
    float p,r,t,si;
    printf("Enter the value of principal amount:");
    scanf("%f",&p);
    printf("Enter the value of rate of interest:");
    scanf("%f",&r);
    printf("Enter the no of year:");
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf("Simple interest=%f\n",si);
    return 0;
}