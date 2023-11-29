#include <stdio.h>
#include <cs50.h>

int factorial(int num);

int main(void)
{
    int n = get_int("Get number: ");
    printf("%i\n", factorial(n));
}

int factorial(int num)
{
    if(num == 1)
    {
        return 1;
    }
    //recursion example
    return num * factorial(num - 1);

}

int factorial2(int num)
{
    if(num == 1)
    {
        return 1;
    }
    int sol;
    for(int i = num; i > 0; i--)
    {
        sol = sol * i;
    }

return sole
}