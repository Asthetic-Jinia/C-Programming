#include<stdio.h>
int main(){
    int x;
    printf("Enter the value of x:");
    scanf("%d",&x);
    if(x%5==0 || x%3==0){
        if(x%30==0){
            printf("%d is divisible by 5,3 and 30",x);
        }else{
            printf("%d is divisible by 5 and 3 but not divisible by 30",x);
        }
    }else{
        printf("%d is neither divisible by 3,5 nor 30");
    }
    return 0;
}