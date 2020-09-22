#include <iostream>

float math(float a, float b)
{
	float P = 2 * (a + b);
	float S = a * b;
	return printf("Perimetr is %.2f, Square is %.2f ", P, S);
}

int main()
{
	float a, b;
	printf("Enter the sides");
	scanf_s("%f %f", &a, &b);
	math(a, b);
	
	printf ("Ars pars");
	
	return 0;
}

