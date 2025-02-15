#include<stdio.h>
#include<math.h>
int main()
{
    float p,t,r,si,ci;
    printf("Enter the principal amount (p):");
    scanf("%f",&p);
    printf("Enter time in year:");
    scanf("%f",&t);
    printf("Enter rate in percent(r):");
    scanf("%f",&r);
    si=(p*t*r)/100.0;
    ci=p*(pow(1+r/100,t)-1);
    printf("simple interest=%0.3f\n",si);
    printf("compound interest=%0.3f",ci);
    return 0;

}