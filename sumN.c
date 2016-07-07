#include<stdio.h>
#include<conio.h>
int main()
{
int no;
printf("\nEnter a number");
scanf("%d",&no);
for(int i=(no-1);i>=0;i--)
no+=i;
printf("\n%d",no);
return 0;
}
