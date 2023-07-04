#include <stdio.h>

int main()
{
    double A , B , sum_1 , sum_2 , sum_Ttl;
    scanf("%lf %lf", &A, &B);
    sum_1 = (A * 3.5) + (B * 7.5);
    sum_2 = 3.5 + 7.5;
    sum_Ttl = sum_1 / sum_2;
printf("MEDIA = %.5lf\n", sum_Ttl);
return 0;
}