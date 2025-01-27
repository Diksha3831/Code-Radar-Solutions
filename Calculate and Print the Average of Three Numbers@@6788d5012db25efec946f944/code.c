#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d\t",&a);
    scanf("%d\t",&b);
    scanf("%d\t",&c);
    double d=(a+b+c)/3.0;
    printf("Average: %.2lf\n",d);
    return 0;
}