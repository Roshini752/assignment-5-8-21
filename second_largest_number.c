#include <stdio.h>
int main()
{

    int arr[]={10,12,15,16,56,23};
    int i,j,n,temp;
    n=sizeof(arr)/sizeof(int);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(arr[i]<arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        }
    }
    for(i=0;i<n;i++)
    printf("%d  ",arr[i]);
    printf("\nsecond largest is %d",arr[1]);

}