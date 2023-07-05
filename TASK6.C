#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
int a=1,f=1,n;
printf("enter number n=");
scanf("%d",&n);
while(a<=n)
{
f=a*f;
a++;
}
printf("n!=%d",f);
getch();
}