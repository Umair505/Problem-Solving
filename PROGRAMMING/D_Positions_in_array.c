#include<stdio.h>
int main()
{   int x;
scanf("%d",&x);
    int arr[x];
    for(int i=0;i<x;i++){
scanf("%d",&arr[i]);
    }

 int count=0;
 for(int i=0;i<x;i++){
  if(arr[i]<=10){
    count=arr[i];
    printf("A[%d] = %d\n",i,count);
  }
 }
    return 0;
}
// Given a number N and an array A of N numbers. Print all array positions that store
// a number less than or equal to 10 and the number stored in that position.