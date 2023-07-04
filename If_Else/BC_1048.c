#include <stdio.h>
int main ()
{
    float sal, nsal;
    scanf("%f", &sal);
    if(sal>=0 && sal<=400.00)
    {
        nsal = sal + (sal*0.15);
        printf("Novo salario: %0.2f\n", nsal);
        printf("Reajuste ganho: %0.2f\n", (nsal-sal));
        printf("Em percentual: 15 %%\n");
    }
    else if(sal>=400.01 && sal<=800.00)
    {
        nsal = sal + sal*.12;
        printf("Novo salario: %0.2f\n", nsal);
        printf("Reajuste ganho: %0.2f\n", (nsal-sal));
        printf("Em percentual: 12 %%\n");
    }
    else if(sal>=800.01 && sal<=1200.00)
    {
        nsal = sal + sal*.1;
        printf("Novo salario: %0.2f\n", nsal);
        printf("Reajuste ganho: %0.2f\n", (nsal-sal));
        printf("Em percentual: 10 %%\n");
    }
    else if(sal>=1200.01 && sal<=2000.00)
    {
        nsal = sal + sal*.07;
        printf("Novo salario: %0.2f\n", nsal);
        printf("Reajuste ganho: %0.2f\n", (nsal-sal));
        printf("Em percentual: 7 %%\n");
    }
    else if (sal>2000.00)
    {
        nsal = sal + sal*.04;
        printf("Novo salario: %0.2f\n", nsal);
        printf("Reajuste ganho: %0.2f\n", (nsal-sal));
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}
