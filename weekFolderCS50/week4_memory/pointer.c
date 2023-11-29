#include <stdio.h>

int main(void){
    int a = 28;
    int b = 50;
    // pointer to integer, will get address of a
    int *c = &a;
    //go to location of a and add 14
    *c = 14;
    //take address of b and store it in c
    c = &b;
    //go to location of c and store value of 25
    *c = 25;

    printf("a has value of %i and located at %p\n", a, &a);
    printf("%i", b);
    printf("%c", *c);

}
