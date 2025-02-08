#include<stdio.h>
int main(){
    int a;
    printf("Enter the value:");
    scanf("%d",&a);
    if(a>99 && a<1000){
        printf("3 digit");
        
    }else{
        printf("not 3 digit");
    }
    return 0;
}