#include <stdio.h>
int main() {
    int a,b,c;
    scanf(%d %d %d,&a,&b,&c);
    if((a>0 && b<0)||(a==0 && b==0)){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}