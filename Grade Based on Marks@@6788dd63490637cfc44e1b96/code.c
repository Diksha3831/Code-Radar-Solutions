#include <stdio.h>
int main(){
    int A,B,C,D,F;
    scanf("%d%d%d%d%d",&A,&B,&C,&D,&F);
    if(A>=90){
        printf("A");
    }
    else if(A>=80 && A<90){
        printf("B");
    }
    else if(A>=70 && A<80){
        printf("C");
    }
    else if(A>=60 && A<70){
        printf("D");
    }
    else{
        printf("F");
    }
    return 0;
}