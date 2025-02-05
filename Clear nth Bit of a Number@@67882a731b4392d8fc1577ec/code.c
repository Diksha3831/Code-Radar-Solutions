#include <stdio.h>
int main() {
    int n, p;
    scanf("%d %d", &n, &p);
    n = n & ~(1 << p); 
    printf("%d", n);
    return 0;
}

