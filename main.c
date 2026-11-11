#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    
    printf("Insert a number: ");
    scanf( "%d", &n);

    if (n > 10)
        printf("The number is higher than 10\n");
    else
        printf("The number is lower than 10\n");
    
    system("pause");
    return 0;

}