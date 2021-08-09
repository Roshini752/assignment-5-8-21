#include<stdio.h>
int cal_even(int n)
{
    printf("even numbers between 1 to 100\n");
    for(int i=1;i<=n;i++)       //to check the boundary
    {
        if(i%2 == 0)            //condition to find the even numbers
        printf("%d ",i);        // 2 4 6 8 10 ....... 100
    }
    printf("\n");       //to start  a new line
}
int cal_odd(int n)
{
    printf("odd numbers between 1 to 100\n");
    for(int i=1;i<=n;i++)       //to check the boundary
    {
        if(i%2 != 0)            //condition to find the odd numbers
        printf("%d ",i);        //1 3 5 7 9 ......99
    }
    printf("\n");
}
int main()
{
    cal_odd(100);
    cal_even(100);
}