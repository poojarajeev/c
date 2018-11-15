// write a programme to implement kruskal algorithm
#include<stdio.h>
int i,j,k,a,b,u,v,n,ne=1;
int min,mincost=0,cost[10][10],parent[10];
int find(int);
int uni(int,int);
void main()
{
 printf("\nImplementation of Kruskal's algorithm");
 printf("\nEnter the no. of vertices\n");
 scanf("%d",&n);
 printf("Enter the cost adjacency matrix\n");
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=n;j++)
  {
   scanf("%d",&cost[i][j]);
   if(cost[i][j]==0)
    cost[i][j]=444;
  }
 }
 printf("\nThe edges of Minimum Cost Spanning Tree are");
 while(ne<n)
 {
  for(i=1,min=444;i<=n;i++)
  {
   for(j=1;j<=n;j++)
   {
    if(cost[i][j]<min)
    {
     min=cost[i][j];
     a=u=i;
     b=v=j;
    }
   }
  }
  u=find(u);
  v=find(v);
  if(uni(u,v))
  {
   printf(" edge (%d,%d) =%d",ne++,a,b,min);
   mincost +=min;
  }
  cost[a][b]=cost[b][a]=444;
 }
 printf("\n\tMinimum cost = %d",mincost);
}
int find(int i)
{
 while(parent[i])
  i=parent[i];
 return i;
}
int uni(int i,int j)
{
 if(i!=j)
 {
  parent[j]=i;
  return 1;
 }
 return 0;
}
