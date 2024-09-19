#include<stdio.h>
int main()
{
    int a[3][3],max,min,i,j;
    printf("enter the values into matrix A");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("the matrix A is");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    min=a[0][0];
    max=a[0][0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]<min)
            min=a[i][j];
            if(a[i][j]>max)
            max=a[i][j];
        }
    }
    printf("\nthe max number is %d",max);
    printf("\nthe min is %d",min);
}
    
