#include <stdio.h>
#include <cs50.h>

int main(void){
   //make array where each new element is 2 time bigger
   int length;

   do{
        length = get_int("Enter length of array: ");
   }while(length < 1);
   int nums [length];
   nums[0] = length;
   for (int i = 0; i < length + 1; i++){
        nums[i + 1] = nums[i] * 2;
    }
   printf("\n");
    for(int j = 0; j < length; j++){
        printf("%i\n", nums[j]);
    }
}