#include<stdio.h>


int main()
{
	int n,i,j,k;
	float x[10],y[10],df[10],s,h,p,sum=0,product,fact;
	printf("enter value of n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter value of x[%d],y[%d]",i,i);
		scanf("%f",&x[i]);
		scanf("%f",&y[i]);
	}
	printf("Enter the point interpolation required say(s)");
	scanf("%f",&s);
	for(i=0;i<n;i++)
	{
		df[i]=y[i];
	}
	for(i=1;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			df[j]=y[j]-y[j-1];
		}
		for(k=0;k<n;k++)
		{
			y[k]=df[k];
		}
	}
	h=x[1]-x[0];
	p=(s-x[0])/h;
	
	sum=df[0];
	product=1;
	fact=1;
	for(i=1;i<n;i++)
	{
		product=product*(p-i+1);
		fact=fact*i;
		sum=sum+((product*df[i])/fact);
	}
	printf("%f is a interpolate value",sum);
	return 0;
	
	
	
}
