// Write a programme to find the time complexity of sorting an arry of random nos and writing the array into a file
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
	clock_t startt,endt;
	double totalt;
 void sel()
{
	int i,j,pos,a[100000],temp,num,r;
	FILE*ptr;
	printf("enter range");
	scanf("%d", & num);
	for(i=0;i<num;i++)
	{
		r=rand()%num+1;
		a[i]=r;
	}
		for(i=0;i<num -1;i++)
	{
		pos=i;
	for(j=i+1;j<num;j++)
	{
		if(a[pos]>a[j])
		pos=j;
	}
	if(pos!=i)
	temp=a[i];
	a[i]=a[pos];
	a[pos]=temp;
}
		ptr=fopen("C:\\asc.txt","w");
		for(i=0;i<num;i++)
		{
			fprintf(ptr,"%d \n", a[i]);
		}
		fclose(ptr);
}
void main()
{
	startt=clock();

	sel();
	endt=clock();
	totalt=(double)(endt-startt)/CLOCKS_PER_SEC;
	printf("time %lf",totalt);
}
