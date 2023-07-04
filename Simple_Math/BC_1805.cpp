#include <stdio.h>
int main() {
    double A , B , n , sum , p , q , r;
    scanf ("%lf %lf", &A , &B);
    n = ((B - A) + 1); //11
    p = n/2; //5
    q = 2*A; //20
    r = n-1; //10
    sum = p*(q+r);
    printf("%.0lf\n", sum);
    return 0;
}