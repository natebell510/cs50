#include <cs50.h>
#include <stdio.h>
int main(void)
{
    string name = get_string("what is your name? ");
    int age;
    do
    {
        age = get_int("what is your age? ");
    }
    while(age < 90);
    long phoneNumber = get_long("what is your phone number? ");


}