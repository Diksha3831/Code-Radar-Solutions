#include <stdio.h>
int main() {
    double a,b,c;
    scanf("%d\t",&a);
    scanf("%d\t",&b);
    scanf("%d\t",&c);
    float d=(a+b+c)/3.0;
    printf("Average: %.2lf\n",d);
    return 0;
}