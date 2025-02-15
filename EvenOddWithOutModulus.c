#include<stdio.h>
int main(){
    float a,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    a=n/2;
    if(a-(n/2)==0){
        printf("even");
    }else{
        printf("odd");
    }
    return 0;
}