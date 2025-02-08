#include<stdio.h>
int main(){
    float cp,sp;
    printf("Enter the value of cost price");
    scanf("%f",&cp);
    printf("Enter the value of selling price");
    scanf("%f",&sp);
    if(sp>cp){
        printf("Profit is %f",sp-cp);
    }else if(sp<cp){
        printf("Loss is %f",cp-sp);

    } else{
        printf("Neither loss nor profit");
    }
    return 0;
    
    
}