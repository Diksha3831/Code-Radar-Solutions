#include <stdio.h>
int main() {
    double a,b,c;
    scanf("%d\t",&a);
    scanf("%d\t",&b);
    scanf("%d\t",&c);
    float d=(a+b+c)/3;
    printf("Average: %.2lf",d);
    return 0;
}