#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    char s[100];
    scanf("%s",s);
    int cnt = 0;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])cnt++;
    }
    printf("%d",cnt);
    return 0;
}