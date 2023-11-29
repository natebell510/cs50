#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = 50;
    //p pointer
    int *p = &n;
    printf("%p\n",p);//0x7fffba011d2c   address of n in memory

    //string sequenc of characters, but in C -> pointer, char *stringName
    string s = "HI!";
    //char *c = &s;
    //typedef char *string

    char *b = "HI!";
    printf("%p\n",b); //0x56408688c008
    printf("%p\n", &s[0]); //0x56408688c008
    printf("%c\n", *s);
    printf("%c\n", *(s+1));
    //if comparing stra == strb - two different addresses in memory, use str.equals(strb)
    //int j == int k;
    //strlen(str)

    //malloc(strlen(str)+1) - allocate memory, free(str);

    //strcpy(t,x);




}