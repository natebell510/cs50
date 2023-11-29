#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void){
    string str = get_string("Type a string: ");
    long l = strlen(str);
    for (int i = 0; i < l - 1; i++) {
       if(str[i] > str[i + 1]){
        printf("No\n");
        return 0;
       } else {
        printf("Yes");
       }
    }

    printf("\n");

}