//a programme to find the time complexity for sorting an arry in ascending order
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define num 100000
void main()
{
    int i=0,numEle;
    clock_t startt,endt;
    double totalt;
    int a[numEle];
    FILE *ptr;
   
    for(i=0;i<numEle;i++)
        scanf("%d",&a[i]);
   
    int j,temp;
    for(i=0;i<numEle;i++)
        for(j=0;j<numEle-i-1;j++)
            if(a[j]>a[j+1])
            {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            }
    endt=clock();
    totalt=(double)(endt-startt)/CLOCKS_PER_SEC;
    printf("%lf",totalt);

    
}


