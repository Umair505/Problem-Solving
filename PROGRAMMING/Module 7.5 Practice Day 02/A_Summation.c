#include<stdio.h>
int main()
{
   int a;
   long long int sum =0;
   scanf("%d",&a);
   int arr[a];
   for(int i=0;i<a;i++){
    scanf("%d",&arr[i]);
   }
   for(int i=0;i<a;i++){
    sum = sum + arr[i];
   }
   if(sum<0){
   printf("%lld",(sum*-1));//printing absolute value
   }
   else{
    printf("%lld",sum);
   }
    return 0;
}
// Given a number N and an array A of N numbers. Print the absolute summation of these numbers.

// absolute value : means to remove any negative sign in front of a number .

// EX : |-5| = 5 , |7| = 7