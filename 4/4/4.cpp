#include <iostream>
#include <math.h>
int math(float a, float b)
{

    float sum = pow(a, 2) + pow(b, 2);
    float difference = fabs(pow(a,2) - pow(b,2));
    float product = pow(a, 2) * pow(b, 2);
    float quotient = pow(a, 2) / pow(b, 2);

    printf("Sum = %.2f, Difference = %.2f, Product = %.2f, Quotient = %.2f", sum, difference, product, quotient );
    return 0;
}

int main()
{

    float a, b;
    printf("Enter two numbers");
    scanf_s ("%f %f", &a, &b);
    math(a, b);

    return 0;
}
