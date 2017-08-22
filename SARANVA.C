#include <stdio.h>
int main()
{
    double h1, h2, h3;

    printf("Enter three different numbers: ");
    scanf("%lf %lf %lf", &h1, &h2, &h3);

    if( h1>=h2 && h1>=h3 )
        printf("%.2f is the largest number.", h1);

    if( h2>=h1 && h2>=n3 )
        printf("%.2f is the largest number.", h2);

    if( h3>=h1 && h3>=h2 )
        printf("%.2f is the largest number.", h3);

    return 0;
}
