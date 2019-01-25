#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int n,i,j,k;
	float a,h,x[20],y[20],df[20],product=1,fact=1,sum=0,p;
	printf("Enter no of set of data: ");
	scanf("%d",&n);
	printf("Enter step size: ");
	scanf("%f",&h);
	printf("Enter estimation value: ");
	scanf("%f",&a);
	for(i=0;i<n;i++)
		{
		printf("Enter x[%d]:",i);
		scanf("%f",&x[i]);
		printf("Enter y[%d]:",i);
		scanf("%f",&y[i]);
	}
	for(i=0;i<n;i++)
	{
		df[i]=y[i];
	}
	for(i=0;i<(n-1);i++)
	{
		for(j=i;j<(n-1);j++)
		{
			df[j+1]=y[j+1]-y[j];
		}
		for(k=0;k<n;k++)
	{
		y[k]=df[k];
	}
	}
	p=(a-x[0])/h;
	sum=y[0];
	for(i=1;i<n;i++)
	{
		product=product*(p-i+1);
		fact=fact*i;
		sum=sum+(y[i]*product)/fact;
	}
	printf("The required interpolate value is: %f",sum);
}
