#include <stdio.h>
int main() {
    char A[100],S[100];
    int N;
    scanf("%s",&A);
    scanf("%[^\n]",&S);
    scanf("%d",&N);
    printf("Name: %s\n",A);
    printf("Age: %d\n",N);
    printf("Hobby: %s\n",S);
    return 0;
}