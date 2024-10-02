#include<stdio.h>
#include<conio.h>
int factorial(int n)
{
 if(n==0 || n==1)
 {
    return 1;
 }
 else
 {
   return n*factorial(n-1);
 }
}
void main()
{
    int result=factorial(1);
    printf("%d",result);
}