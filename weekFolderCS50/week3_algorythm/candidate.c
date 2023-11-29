#include <stdio.h>
#include <string.h>
#include <cs50.h>



typedef struct
{
        string name;
        int votes;
}
candidate;

candidate get_candidate(string prompt);

int main(void)
{

    /*
    candidate president = get_candidate("Enter a candidate: ");
    printf("%s\n", president.name);
    printf("%i\n", president.votes);
    */

   candidate candidates_array[3];
   

}

candidate get_candidate(string prompt)
{
    printf("%s", prompt);

    candidate c;

    c.name = get_string("Enter a name: ");
    c.votes = get_int("Enter number of votes: ");
    return c;

}