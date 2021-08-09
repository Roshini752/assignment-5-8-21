#include<stdio.h>
int main()
{
   int arr[]={34,56,76,0,89,3,-5,27,30};
   int n=sizeof(arr)/sizeof(int);   // here we will get the size of array
   int i=0,sum=0;
   
     //for(i=0;i<n;i++)
     while(i<n)            //  looping
     {
         
         if(arr[i] < 0)            // it will check weather the number is positive or negetive 
         continue;               //   it stop the presnt iteration and continue with next loop
         sum =sum + arr[i];
             
     }
     printf("sum is %d",sum);

}