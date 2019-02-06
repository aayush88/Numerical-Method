#include<stdio.h>
#include<math.h>
float f(float x){
	return(1/(1+x*x));
}
int main()
{
	int i,n;
	float a,b,h,x[30],y[30],IV;
	
	printf("Enter the value of a and b");
	scanf("%f%f",&a,&b);
	printf("Enter the value of n:");
	scanf("%d",&n);
	
	h=(b-a)/n;
	x[0]=a;
	x[n]=b;
	for(i=1;i<n;i++)
	{
		x[i]=x[i-1]+h;
		y[i]=f(x[i]);
	}
	IV=f(a)+f(b);
	for(i=1;i<n;i++)
	{
		if(i%3==0)
		IV=IV+2*y[i];
		else
		IV=IV+3*y[i];
	}
	IV=3*h*IV/8;
	printf("The solution of integral value is %f",IV);
}

