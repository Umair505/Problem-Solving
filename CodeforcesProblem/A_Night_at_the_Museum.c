#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main() {

    char s[100];
    scanf("%s",s);
    int sum = 0;
    char a = s[0];
    if(abs(a-'a') > 13)
    {
        sum += 26 - abs(a-'a');
    }
    else sum += abs(a-'a');
    for(int i=0;i<strlen(s)-1;i++)
    {
        if(abs(s[i]-s[i+1])>13){
            sum += 26 - abs(s[i]-s[i+1]);
        }
        else
        {
            sum += abs(s[i]-s[i+1]);
        }
    }
    printf("%d",sum);
    return 0;
}
