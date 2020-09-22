#include <iostream>

int main()
{
    printf("Enter two numbers ");
    float a, b;
    scanf_s ("%f %f", &a, &b);
    float Am = (a + b) / 2;
    printf ("The arithmetic mean is %.2f", Am);

    return 0 ;
}
