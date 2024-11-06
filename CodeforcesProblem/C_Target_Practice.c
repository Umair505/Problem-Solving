#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[10][10];
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                scanf(" %c",&s[i][j]);
            }
        }
        int sum = 0;
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                if(s[i][j]=='X')
                {
                    if(i==0 || i==9  || j==0 || j==9)sum+=1;
                    else if(i==1 || i==8  || j==1 || j==8)sum+=2;
                    else if(i==2 || i==7  || j==2 || j==7)sum+=3;
                    else if(i==3 || i==6  || j==3 || j==6)sum+=4;
                    else sum+=5;
                }
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}