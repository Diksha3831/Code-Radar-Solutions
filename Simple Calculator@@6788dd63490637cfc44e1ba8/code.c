#include <stdio.h>
int main(){
    int a,b,c,d,e,f,g;
    scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g);
    if(c=='+'){
        d=a+b;
        printf("%d",d);
    }
    else if(c=='-'){
        e=a-b;
        printf("%d",e);
    }
    else if(c=='*'){
        f=a*b;
        printf("%d",f);
    }
    else if(c=='/'){
        g=a/b;
        printf("%d",g);
    }
    else{
        printf("Error");
    }
}