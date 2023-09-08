#include<stdio.h>
#include<string.h>
void main()
{
char a[50],b[50];
clrscr();
printf("Enter the 1st string");
gets(a);
printf("Enter the 2nd String");
gets(b);
strcat(a,b);
printf("After concatenation=%s",a);
getch();
}