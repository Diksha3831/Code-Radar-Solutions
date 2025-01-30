#include <stdio.h>
#include <ctype.h>
int main(){
    char d;
    scanf("%c",&d);
    if((d>='a' && d<='z'))
    {
        a=tolower(a);
        if(d=='a'|| d=='i'||d =='e'||d =='o'||d ='u')
        {
            printf("Vowel");
        }
        else
        {
            printf("Consonant");
        }
    }
    else if(isdigit(a)){
        printf("Digit");
    }
    else{
        printf("Special character");
    }
    return 0;
}