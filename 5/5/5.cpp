#include <iostream>
int math(float a, float b)
{
    float sum = fabs(a) + fabs(b);
    float dif = fabs(fabs(a) - fabs(b));
    float product = fabs(a) * fabs(b);
    float quo = fabs(a) / fabs(b);

    printf("The sum is %.2f, The difference is %.2f, The product is %.2f, The quotient is %.2f", sum, dif, product, quo);
    return 0;
}

int main()
{
    float a, b;
    printf("Write 2 numbers ");
    scanf_s ("%f %f", &a, &b);
    math(a, b);

    return 0;
}
