    #include <stdio.h>
    int main()
    {
         int a, b;
         double c, r;
         scanf("%d %d %lf", &a, &b, &c);
         r = b * c;
         scanf("%d %d %lf", &a, &b, &c);
         r += b * c;
         printf("VALOR A PAGAR: R$ %.2lf\n", r);
         return 0;
    }