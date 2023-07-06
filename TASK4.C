#include<stdio.h>
#include<conio.h>
main()
{
int n,fd,ld,sum=0;
clrscr();
printf("enter number=");
scanf("%d",&n);
ld=n%10;
while(n>=10)
{
n=n/10;
}
fd=n;
sum=fd+ld;
printf("sum of ld and fd=%d",sum);



getch();
}
