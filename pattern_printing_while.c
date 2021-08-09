#include <stdio.h>

int main()
{
    int i=0,j,n=5;
    while(++i<=n)       //i=1 i=2 i=3 i=4 i=5
    {
        printf("%d",i);
        printf("%c",47);         // / / / / /
        j=i;      // j=1 j=2 j=3 j=4 j=5
        while(j!=1)     
        {
            j--; 
            printf("%d",j);       //   j=1  j=2,j=1 j=3,j=2,j=1 j=4,j=3,j=2,j=1
            printf(" ");  
            
        }
        printf("%c\n",92);    // \ \ \ \ 
       
    }

    return 0;
}