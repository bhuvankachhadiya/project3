#include<stdio.h>
#include<conio.h>
main()
{
int a=0,b=1,i,newd;
clrscr();
printf("%d,%d,",a,b);
for( i=2;i<10;i++)
{
 newd=a+b;
 a=b;
 b=newd;
 printf("%d,",newd);
}


getch();
}
