#include <stdio.h>
// #define pi 3.14    making pi as a constant by using #define
int main()
{
    double c,a,d;
    const float pi=3.14; // making pi as a constant by using const 
    printf("enter the diameter value d = ");
    scanf("%lf",&d);
    c=pi*d;
    float r=(d/2);  // here we will get radious
    a=pi*r*r;
    printf("circumference of circle is %.3lf\n",c);
    printf("area of circle is %.3lf\n",a);
}
