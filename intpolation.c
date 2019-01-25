#include<stdio.h>
#include<stdlib.h>

int main()
	{
		int i,j,n;
		float a,x[10],y[10],temp=1,l[10],sum=0;
		printf("enter value of n:");
		scanf("%d",&n);
		printf("\nenter the set of data");
		for(i=0;i<=n;i++)
		{
			scanf("%f",&x[i]);
			scanf("%f",&y[i]);
			}
		printf("enter the point for interpolation");
		scanf("%f",&a);
		
		for(i=0;i<=n;i++)
		{	temp=1;		
			for(j=0;j<=n;j++)
			{
				if(i!=j)
				{
				temp=temp*(a-x[i]/x[i]-x[j]);
				}
				l[i]=temp;
			}
		}
		for(i=0;i<=n;i++)
		{
			sum=sum+(y[i]*l[i]);
		}
		printf("interpolation value is %f",sum);
		return 0;
		
				}
