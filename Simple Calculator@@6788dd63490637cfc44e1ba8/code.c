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
    else if(c=='/'){
        d=a/b;
        printf("%d",d);
    }
    else{
        printf("Error");
    }
    return 0;
}