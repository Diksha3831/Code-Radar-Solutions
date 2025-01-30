#include <stdio.h>
#include <ctype.h>
int main(){
    char a;
    scanf("%c",&a);
    a=tolower(a);
    if((a>='a && a<='z'')){
        if(a=='a'||a=='i'||a=='e'||a=='o'||a='u')
        {
            printf("Vowel");
        }
        else
        {
            printf("Consonant");
        }
    }
    else{
        printf("Special Character");
    }
    return 0;
}