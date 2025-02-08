#include<stdio.h>
int main(){
    int l,b,area,perimeter;
    printf("Enter the value of l and b");
    scanf("%d%d",&l,&b);
    area=l*b;
    perimeter=2*(l+b);
    if(area>perimeter){
        printf("Area is greater than its perimeter");
    }else{
        printf("area is less than its parameter");
    }
    return 0;

}