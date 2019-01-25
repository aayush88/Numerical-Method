#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define f(x) 2*x*x-2*x+6
#define g(x) 2*x*x+5
#define e 0.0001
int main(){
	float x0,x1,ecal;
	int count=0;
	printf("input initial guess:");
	scanf("%f",&x0);	
	do{
	x1=g(x0);
	count=count+1;
	ecal=fabs((x1-x0)/x1);
if(count>20){
	printf("no covergence of root ");
	exit(0);
}
else{
	x0=x1;
}
}while(e<ecal);
printf("root %f",x1);
return 0;	
}
