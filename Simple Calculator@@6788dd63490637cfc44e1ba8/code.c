#include <stdio.h>
int main(){
    int a,b,d;
    char c;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(c=='+'){
        d=a+b;
        printf("%d",d);
    }
    else if(c=='-'){
        d=a-b;
        printf("%d",d);
    }
    else if(c=='*'){
        d=a*b;
        printf("%d",d);
    }
    else if (c == '/') {
        if (b != 0)
            printf("%d\n", a / b);
        else
            printf("error\n");  
    } else {
        printf("error\n"); 
    return 0;
}