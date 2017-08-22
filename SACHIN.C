#include <stdio.h>
int main()
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);
    if(number % 1 == 0)
        printf("%d is odd.", number);
    else
        printf("%d is even.", number);

    return 0;
}

