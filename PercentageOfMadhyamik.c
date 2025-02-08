#include<stdio.h>
int main(){
    int B,E,M,Phy,L,H,G;
    printf("Enter the value of Bengali,English,Math,Phy Sc,life Sc,History,Geography");
    scanf("%d%d%d%d%d%d%d",&B,&E,&M,&Phy,&L,&H,&G);
    float per;
    per=(B+E+M+Phy+L+H+G)/7;
    printf("The percentage in Madhyamik is %f",per);
    return 0;
}