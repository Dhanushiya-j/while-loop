#include<stdio.h>
#include<conio.h>
void main()
{
int num,rem,min=9;
printf("enter the number");
scanf("%d",&num);
while(num!=0)
{
rem=num%10;
if(min>rem)
min=rem;
num=num/10;
}
printf("%d",min);
getch();
}
