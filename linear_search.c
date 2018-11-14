#include<stdio.h>
int main()
{
	int a[5][5];
	int b,m,n,i,j,flag=0;
	printf("enter row size");
	scanf("%d", &m);
	printf("enter column size");
	scanf("%d", &n);
	printf("enter array");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("enter no. to be searched");
	scanf("%d", &b);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==b)
			{
				printf("%d, %d",i,j);
				flag=1;
			}
		}
		break;
	}
	if(flag==0)
	{
		printf("not found");
	}
return 0;
}
