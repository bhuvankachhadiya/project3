#include<stdio.h>
#include<conio.h>
main()
{

int a=1,n;
clrscr();
printf("enter number n=");
scanf("%d",&n);
while(a<=10)
{
printf("%d*%d=%d\n",a,n,a*n);
a++;
}

getch();
}