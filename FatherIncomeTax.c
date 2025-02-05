#include<stdio.h>
int main(){
    float income,tax,total_tax;
    printf("Enter total income:");
    scanf("%f",&income);
    printf("Enter the percentage of tax:");
    scanf("%f",&tax);
    total_tax=(income*tax)/100;
    printf("Total tax has to be given=%f",total_tax);
    return 0;
}