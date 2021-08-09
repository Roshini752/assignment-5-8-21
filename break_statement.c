#include<stdio.h>
int main()
{
   int arr[]={34,56,0,76,89,3,-5,27,30};
   int n=sizeof(arr)/sizeof(int);
   int i=0,sum=0;
   
      while(i<n)
      {
         
         if(arr[i] == 0)
         break;  
         sum =sum + arr[i];
         i++;          //it will terminate from the loop 
        
      }
      printf("sum is %d",sum);

}

