// Write a programme to find the time complexity of binary search
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define num 1000000
void binary(int a[],int,int,int);
void main()
{
int i=0;
clock_t startt,endt;
double totalt;
int a[num];
for(i=0;i<num;i++)
{
scanf("%d", &a[i]);
}
int f=0;
startt=clock();
int e=5320;
int low=0;
int high=num;
int mid=(low+high)/2;
while(low<high)
{
mid=(low+high)/2;
if(a[mid]==e)
{
printf("key found");
}
else if (a[mid]>e)
{
low=mid+1;
}
else{
high=mid-1;
}
}
endt=clock();
totalt=(double)(endt-startt)/CLOCKS_PER_SEC;
printf("% lf", totalt);
printf("\n");
}


