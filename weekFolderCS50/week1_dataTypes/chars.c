#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>


int main(void){
    string s = get_string("Before: ");
    printf("After: ");
    //str.length make call every time, better to have it as declared variable, ex. n
    for (int i = 0, n = strlen(s); i < n; i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            printf("%c", s[i] - 32);
        }else{
            printf("%c", s[i]);
        }
    }
    printf("\n");
}