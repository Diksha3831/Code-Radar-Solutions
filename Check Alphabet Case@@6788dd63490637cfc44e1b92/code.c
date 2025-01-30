#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(isupper(a)){
        printf("Uppercase");
    }
    else if(islower(a)){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}