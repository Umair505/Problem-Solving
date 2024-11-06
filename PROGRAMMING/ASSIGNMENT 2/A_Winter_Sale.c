#include<stdio.h>
#include<math.h>
int main()
{
    float dis,adp;
    scanf("%f %f",&dis,&adp);
    float p=1-dis/100;
printf("%.2f",adp/p);
    return 0;
}