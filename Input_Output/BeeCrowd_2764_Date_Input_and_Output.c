#include <stdio.h>
int main()
{
    int dd , mm , yy;
    char slash , dash = '-';
    scanf("%02d %c %02d %c %02d", &dd , &slash , &mm , &slash , &yy);
    printf("%02d%c%02d%c%02d\n", mm , slash , dd , slash , yy);
    printf("%02d%c%02d%c%02d\n", yy , slash , mm , slash , dd);
    printf("%02d%c%02d%c%02d\n", dd , dash , mm , dash , yy);
    return 0;
}
