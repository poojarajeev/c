// a programme to find the adjacency matrix
#include<stdio.h>
void main()
{
    int AdMat[5][5];
    int i,j,c;
    for(i=0;i<5;i++)
    {    for(j=0;j<5;j++)
         {    AdMat[i][j]=0;
        }
    }
    do
    {    printf("enter the nos between which there is connection:");
        scanf("%d %d",&i,&j);
        AdMat[i][j]=1;
        AdMat[i][j]=1;
        printf("enter 1 to continue and o to exit:");
        scanf("%d",&c);
    }
    while(c==1);
    printf("the matrix is:\n\n");
    for(i=0;i<5;i++)
    {    printf("\n");
        for(j=0;j<5;j++)
        {    printf("%d",AdMat[i][j]);
        }
    }
    printf("\n\n");
    printf("enter the nos whose connection is to be printed");
    scanf("%d",&i);
    for(j=0;j<5;j++)
    {    if(AdMat[i][j]==1)
        {    printf("%d",j);
        }
    }
    printf("\n");
} 
