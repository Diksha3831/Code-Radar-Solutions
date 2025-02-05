#include <stdio.h>
int main(){
    int a,b,d;
    char c;
    scanf("%d%d%c%d",&a,&b,&c,&d);
    if(c=='+'){
        printf("%d\n",a+b);
    }
    else if(c=='-'){
        printf("%d\n",a-b);
    }
    else if(c=='*'){
        printf("%d\n",a*b);
    }
    else if (c == '/') {
        if (b != 0)
            printf("%d\n", a / b);
        else
            printf("error\n");  
    } else {
        printf("error\n"); 
    }
    return 0;
}
