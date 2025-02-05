#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num<=1){
        printf("Not Prime");
    }
    else if(num==2 || num==3 || num==5 || num==7){
        printf("Prime");
    }
    else if(num%2==0 || num%3==0 || num%5==0 || num%7==0){
        printf("Not Prime");
    }
    else
    printf("Prime");
    return 0;
}