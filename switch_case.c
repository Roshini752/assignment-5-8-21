#include<stdio.h>
#include<math.h>
int main()
{
    char ch;
    int a=6,b=10;
    printf("select a or s\n");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a' :    printf("sum is %d",a+b);break;
        case 's' :    printf("difference is %d",abs(a-b));break;
        default  :    printf("no-action");
    }
}