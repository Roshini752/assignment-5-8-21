//Program to explain all operators using different data types.

#include<stdio.h>
int main()
{
int a,b,c,d,x,y,z;
//arithmetic and assignment (=)
float var=6.5+2;// +,-,/,%,*,
char ch= 'A', ch1='c';
printf("var=%f\n ch=%c\n",var,ch);
//logical && || !
 a=!var;
 b=ch && var;
 ch1=!ch1;
 c=a || var;
 //relational > < <= >= == !=
 d= b>c;
printf("a=%d b=%d c=%d d=%d ch_1=%d\n",a,b,c,d,ch1);
//bit wise operator & | ^ << >> ~
int val=(int)var;   // explicit type casting
val=val|(1<<4);  //set a bit
printf("set %d\n",val);
ch = ch|(1<<4);
printf(" set a bit-ch = %c\n",ch);
x=val;
val=val & ~(1<<4);//reset a bit
printf("reset %d\n",val);
y=val;
val=val ^ (1<<5);//toggle a bit
printf("toggle %d\n",val);
z=val;
//conditional operator  condition?truepart:falsepart
int max = (x>y)?((x>z)?x:z):((y>z)?y:z);
printf("max = %d\n",max);

}
