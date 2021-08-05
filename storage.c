// Program to explain all storage classes scope.


#include<stdio.h>
 int fun();
 extern int a;//internal linking for external linking we need to link with another file
 int main()
 {
     register int b=10;
   //  printf("%lu",&b);//it throws error b/c we can't print the address of register
     {
     auto int a=200;//it will work for this scope only
     printf("%d\n",a);
     }
     printf("%d\n",a);//it will through error if we remove extern int a__undeclared element
       fun();
       fun();
 }
 int a=10;
 int fun()
 {
     static int i=10; // static doesnt allow external linkage
     i++; //it won't update if we dont use static key word
     printf("%d\n",i);

 }

