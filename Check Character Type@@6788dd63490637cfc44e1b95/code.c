#include <stdio.h>
#include <ctype.h>
int main(){
    char d;
    scanf("%c",&d);
    d=tolower(d);
    if((d>='a' && d<='z'))
    {
        if(d=='a'|| d=='i'||d =='e'||d =='o'||d ='u')
        {
            printf("Vowel");
        }
        else
        {
            printf("Consonant");
        }
    }
    else if{
        printf("Digit");
    }
    else{
        printf("Special character");
    }
    return 0;
}