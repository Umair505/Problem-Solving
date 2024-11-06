#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    char s[100];
    int cnta=0,cntb=0,cntc=0,cntd=0;
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='1'){
            cnta++;
        }
        else if(s[i]=='2'){
            cntb++;
        }
        else if(s[i]=='3'){
            cntc++;
        }
        else cntd++;
    }
    int ans = (a*cnta)+(b*cntb)+(c*cntc)+(d*cntd);
    printf("%d",ans);
    return 0;
}