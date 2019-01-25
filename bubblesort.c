#include<stdio.h>
#include<conio.h>
#define SIZE 5
void bubble_sort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<(n-i-1);j++)
		{
			if (a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
int main()
{
	int list[50],n,i;
	printf("How many elements you want");
	scanf("%d",&n);
	printf("Enter the elements of list \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&list[i]);
	}
	printf("\nThe list before sorting is \n ");
	for(i=0;i<n;i++)
	{
		printf("%d \t",list[i]);
	}
	printf("\nThe list after sorting is \n");
	bubble_sort(list,n);
	for(i=0;i<n;i++)
	{
		printf("%d \t",list[i]);
	}
	}

