#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int years = 0;
    //3 passes
    //4 added

    //get starting number of llamas
    int amount = get_int("what is starting number of llamas? ");
    //get goal number of llamas
    int goalAmount = get_int("what is goal number of llamas? ");
    //add and subtract llamas every year until goal is reached
    do
    {
        amount = amount * 4;
        amount = amount/3;
        years++;
    }
    while(amount <= goalAmount);

    //print number of years it took to reach the goal
    printf("Years required to reach goal amount is %i\n", years);
    printf("end of statement\n");
    //switch
    switch(amount){
        case 1: printf("amount is %i ", amount);
        default: printf("amount is not one\n");
    }
    //ternary
    int result = (amount > 1) ? 2 : 0;
    printf("result is %i\n",result);

    //infinite loop while(bool){}
    //do{}while(); at least one run
    //for loop (start;expr;increment)



}