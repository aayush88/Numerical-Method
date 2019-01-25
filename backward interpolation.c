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
		//computing backward difference
	for(i=n-2;i>=0;i--)
	{
		for(j=i;j>=0;j--)
		{
			df[j]=y[j+1]-y[j];
		}
		for(k=0;k<=n;k++)
		{
			y[k]=df[k];
		}
	}
	printf("differece table\n");
	for(i=0;i<n;i++)
	{
		printf("%f\t",df[i]);
	}
	h=x[1]-x[0];
	p=(s-x[n-1])/h;
	
	sum=df[n-1];
	product=1;
	fact=1;
	for(i=n-2;i>=0;i--)
	{
		product=product*(p+n-i-1);
		fact=fact*i;
		sum=sum+((product*df[i])/fact);
	}
	printf("%f is a interpolate value",sum);
	return 0;
	
}
