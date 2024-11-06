#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int x,y;
    
    scanf("%d %d",&x,&y);
    for(int i=0;i<a;i++){
        arr[x]=y;
    }
     for(int i=a-1;i>=0;i--){
        // arr[x]=y;
        printf("%d ",arr[i]);
    }
    
   
    return 0;
}