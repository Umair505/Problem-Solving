#include<stdio.h>
#include<limits.h>
int main()
{
    int x;
    scanf("%d",&x);
    int arr[x];
    for (int  i = 0; i < x; i++)
    {
        scanf("%d",&arr[i]);

    }
    int m =INT_MAX;
    int pos;
    for (int i = 0; i < x; i++)
    { 
        if(m>arr[i]){
            m=arr[i];
            pos=i+1;
        }
        }
    printf("%d %d",m,pos);
    return 0;
}
//Given a number N and an array A of N numbers. Print the lowest number and its position.