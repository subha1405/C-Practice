
#include<string.h>
void main()
{
char a[50],b[50];
clrscr();
printf("\nEnter the source string");
scanf("%s",a);
printf("\nEnter the Destination String");
scanf("%s",b);
strcpy(b,a);
printf("\nCopied String=%s",b);
getch();
}