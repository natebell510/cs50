#include <stdio.h>

int main(void){

    int x;
    int y;
    printf("Enter X: ");
    scanf("%d", &x);

    printf("Enter Y: ");
    scanf("%d", &y);

    printf("RESULT: ");
    printf("%d\n", x + y);

    printf("You entered: %d for X\n", x);
    printf("You entered: %d for Y\n", y);
}