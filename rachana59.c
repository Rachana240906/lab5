#include<stdio.h>
int main()
{
	int a[10],b[10],i;
	printf("\nenter the values into array A");
	for(i=0;i<10;i++)
	{
	    scanf("%d",&a[i]);
	}
	printf("\narray A before swapping is");
	for(i=0;i<10;i++)
	{
	    printf("\n%d",a[i]);
	}
	printf("\nenter the values into array B");
	for(i=0;i<10;i++)
	{
	    scanf("%d",&b[i]);
	}
	printf("\narray B before swapping is");
	for(i=0;i<10;i++)
	{
	    printf("\n%d",b[i]);
	}
    printf("The arrays A and B after swapping are");
	for(i=0;i<10;i++)
	{
	a[i]=a[i]+b[i];
	b[i]=a[i]-b[i];
	a[i]=a[i]-b[i];
	printf("%d\t",a[i]);
	printf("%d\n",b[i]);
	}
}
