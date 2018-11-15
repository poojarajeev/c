// Write a programme to find the time complexity to sort an array in descending order
#include<stdio.h>
#include <stdlib.h>
#include<time.h>
#define numEle 100000
int a[numEle];
void main()
{    int a[numEle],c,d,temp;
    FILE *fp;
    for(c=0;c<numEle;c++)
    {    scanf("%d",&a[c]);
    }
    for(c=0;c<numEle;c++)
    {    for(d=0;d<(numEle-c-1);d++)
        {    if(a[d]<a[d+1])
            {    temp=a[d];
                a[d]=a[d+1];
                a[d+1]=temp;
            }
        }
    }   
    fp=fopen("descending.txt","w");
    for(c=0;c<numEle;c++)
    {   
        fprintf(fp,"%d \n",a[c]);
    }
    fclose(fp);   
}
