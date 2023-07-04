#include<stdio.h>

int main()
    {
    double x1 , y1 , x2 , y2 , temp , D;
    scanf("%lf %lf %lf %lf", &x1 , &y1 , &x2 , &y2);
    temp = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    D = sqrt(temp);
    printf("%.4lf\n", D);
    return 0;
}