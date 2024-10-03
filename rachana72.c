#include<stdio.h>
int main()
{
	int a[5],i,temp,j,n,m=1;
	printf("enter the no of rotations");
	scanf("%d",&n);
	printf("\nenter the values into array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=n;j>0;j--)
	{
	temp=a[4];
	for(i=5;i>0;i--)
	{
		a[i]=a[i-1];
	}
	a[0]=temp;
	printf("\nafter %d rotation:",m);
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	}
}
