#include<stdio.h>
#include<conio.h>
main()
{
int n,count=0;
clrscr();
printf("enter number=");
scanf("%d",&n);//60/10=6,count=1,6/10=0,count=2
while(n>0)
{
 n=n/10;
 count++;

}
printf("number of digit=%d",count);
getch();
}
