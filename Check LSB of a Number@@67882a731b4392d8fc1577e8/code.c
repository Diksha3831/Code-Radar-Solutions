#include <stdio.h>
int main() {
    int a;
    scanf(("%d",&a)!=1){
        printf("Invalid number\n");
        return 1;
    };
    if(a&1){
        printf("Set");
    }
    else{
        printf("Not set");
    }
    return 0;
}