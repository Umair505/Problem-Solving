#include <stdio.h>
int step=0;
void toh(int n, char src, char aux, char des)
{
    if (n == 1)
        printf("Step %d : Move %d from %c to %c\n",++step, n, src, des);
    else
    {
        toh(n - 1, src, des, aux);
        printf("Step %d : Move %d from %c to %c\n",++step, n , src, des);
        toh(n - 1, aux, src, des);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    toh(n, 'A', 'B', 'C');
    int x = 1;
    for(int i=n;i>=1;i--)
    {
        printf("n = %d, %d times\n",i,x);
        x = x*2;
    }
    return 0;
}