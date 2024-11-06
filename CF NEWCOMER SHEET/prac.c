#include <stdio.h>
int main()
{
    double n;
    scanf("%lf", &n);
    if (n < 0 || n > 100)
    {
        printf("Fora de intervalo\n");
    }
    else if (n >= 0 && n <= 25)
    {
        printf("Intervalo [0,25]\n");
    }
    else if (n > 25 && n <= 50)
    {
        printf("Intervalo (25,50]");
    }
    else if (n > 50 && n <= 70)
    {
        printf("Intervalo (50,75]");
    }
    else if (n > 75 && n <= 100)
    {
        printf("Intervalo (75,100]");
    }
}