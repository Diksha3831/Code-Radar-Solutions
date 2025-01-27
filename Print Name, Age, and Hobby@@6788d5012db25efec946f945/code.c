#include <stdio.h>
int main() {
    char A[100],S[100];
    int N;
    scanf("%s",&A);
    scanf("%[^\n]",&S);
    scanf("%d",&N);
    printf("Name: %s\nAge: %d\nHobby: %s",A,N,S);
    return 0;
}