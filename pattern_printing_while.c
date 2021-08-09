#include <stdio.h>

int main()
{
    int i=0,j,n=5;
    int k;
    while(++i<=n)       // i=1 i=2 i=3
    {
        for (k = 1; k <= n - i; ++k) // k=1;k<=4
        {
            printf(" ");                              
        }
        
        printf("%c",47);         
        j=i;                 // j=1 j=2 j=3
        while(j!=1)     
        {
            
            j--; 
                 
            printf("  ");  
            
        }
        printf("%c\n",92);  
        printf("\n");
               
    }
    return 0;
}