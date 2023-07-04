#include <stdio.h>

int main ()
{

	float A, B;
	double C, D;

	scanf("%f %f %lf %lf", &A, &B, &C, &D);

	printf("A = %lf, B = %lf\nC = %lf, D = %lf\n", A, B, C, D);
	printf("A = %.1lf, B = %.1lf\nC = %.1lf, D = %.1lf\n", A, B, C, D);
	printf("A = %.2lf, B = %.2lf\nC = %.2lf, D = %.2lf\n", A, B, C, D);
	printf("A = %.3lf, B = %.3lf\nC = %.3lf, D = %.3lf\n", A, B, C, D);
	printf("A = %.3E, B = %.3E\nC = %.3E, D = %.3E\n", A, B, C, D);
	printf("A = %.0lf, B = %.0lf\nC = %.0lf, D = %.0lf\n", A, B, C, D);
return 0;
}