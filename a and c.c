// to calculate area and circumference of a circle

#include <stdio.h>
#define pi 3.14
int main()
{
    double c,a,d;
    printf("enter the diameter value d = ");
    scanf("%lf",&d);
    c=pi*d;
    float r=(d/2);  // here we will get radious
    a=pi*r*r;
    printf("circumference of circle is %.3lf\n",c);
    printf("area of circle is %.3lf\n",a);
}
