#include<stdio.h>
int sum(int a ,int b);
int diff(int a,int b);
int div(int a,int b);
int product(int a,int b);
void main()
{
int n,c,result,a,b;
printf("\nEnter 1 for addtion,2 for product,3 for division,4 for difference");
scanf("%d",&n);
printf("Enter the two numbers");
scanf("%d%d",&a,&b);
switch(n)
{
case '1':
result=sum(a,b);
break;
case '2':
result=product(a,b);
break;
case '3':
result=div(a,b);
 break;
case '4':
result=diff(a,b);
 break;
}
printf("Result is %d=",result);
}
int sum(int a,int b,int s)
{
s=a+b;
return s;
}
int product(int a,int b)
{
return a*b;
}
int div(int a,int b)
{
return a/b;
}
int diff(int a,int b)
{
return a-b;
}
