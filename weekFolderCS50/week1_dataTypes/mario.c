#include <stdio.h>

int get_size(void);
void print_grid(int size);


int main(void)
{
   
    int h;
    int w;
    printf("Enter an height: ");
    scanf("%d", &h);
    printf("Enter an width: ");
    scanf("%d", &w);

    for (int i = 0; i < h; i++)
    {
        for (int x = 0; x < w; x++)
    {
        printf("#\t");
    }
     printf("\n");
    }
    printf("You entered: %d for height\n", h);
    printf("You entered: %d for width\n", w);

    int u = get_size();
    print_grid(u);

}

int get_size(void)
{
    int n;
    do{
        printf("Running my first function in C:\n");
        printf("enter size of grid: ");
        n = scanf("%d", &n);
    }
    while(n < 1);
    return n;
}

void print_grid(int size)
{
     for (int i = 0; i < size; i++)
    {

        for (int x = 0; x < size; x++)
    {
        printf("#\t");
    }
     printf("\n");
    }
}