#include <stdio.h>
#include <cs50.h>
#include <stdint.h>

//pdf will begin with four byte sequence

int main(int argc, string argv[])
{
    if(argc !=2){
        printf("improper usage.");
        return 1;
    }

    //open file
    string filename = argv[1];
    FILE *file = fopen(filename, "r");
    //portable document format

    //check if file exists
    if (file == NULL){
        printf("no such file found.\n");
        return 1;
    }

    //read data from our file, it will vi saved into buffer
    //signed or unsigned - positive or negative
    uint8_t buffer[3];
    uint8_t signature[] = {37,80,68,70};

    fread(buffer, 1,4, file);
    for (int i = 0; i < 4; i++)
    {
        if(buffer[i] != signature[i])
        {
            printf("not a pdf\n");
            return 0;
        }
    }
    printf("file is pdf\n");
    printf("\n");

    //dynamic memory - malloc memory allocation
    //heap is larger than stack

    //when use malloc, always user free
    //when user fopen follow by fclose

    //valgrind ./pdf hi.txt   -> will show memory leaks, if fclose and free is missed


}
