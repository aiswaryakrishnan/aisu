#include<stdio.h>
#include<conio.h>
int main()
{
	int low=0;
	int high=0;
	int c=0;
	int temp=0;
	printf("\nEnter lower limit");
	scanf("%d",&low);
	printf("\nEnter upper limit");
	scanf("%d",&high);
	temp=low;
	for(int i=temp;i<=high;i++)
	{
	int j=i;
		while(j!=0)
		{
		if((i%j)==0)
		c++;
		j--;
		}
		if(c==2)
		printf("\t%d",i);
	c=0;
	}
return 0;
}
