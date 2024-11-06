#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int minm = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(minm > abs(a[i]))minm = abs(a[i]);
    }
    printf("%d",minm);
    return 0;
}