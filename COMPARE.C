#include<stdio.h>
#include<string.h>
void main()
{
char a[30],b[30];
int d;
printf("Enter the two strings");
scanf("%s",&a);
scanf("%s",&b);
strcat(a,b);
printf("%s",a);
}
