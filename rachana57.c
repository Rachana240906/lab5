#include<stdio.h>
int main()
{
	int a[10],i,fmax,smax;
	printf("\nenter the numbers into array");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the array is:");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	fmax=a[0];
	smax=a[0];
	for(i=0;i<10;i++)
	{
		if(a[i]>fmax)
		fmax=a[i];
		if(a[i]>smax && a[i]<fmax)
		smax=a[i];
	}
	printf("\nthe first max is %d",fmax);
	printf("\nthe second max is %d",smax);
}
