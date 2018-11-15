//Write a programme to implement merge sort
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m-l+1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2){
        if (L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    while (i < n1){
        arr[k] = L[i];
        i++;
        k++;
    }
 
    while (j < n2){
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int l, int r)
{
    if (l < r){
        int m = l+(r-l)/2;
 
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
 
        merge(arr, l, m, r);
    }
}
void main()
{
    int n,numEle;
    numEle=500000;
    int i=0;
    clock_t startt,endt;
    double totalt;
    int a[numEle];
    FILE *fpr;
    for(i=0;i<numEle;i++)
        scanf("%d",&a[i]);                                                                                      
    int j=0;
    int t;
    int small,pos,temp;
    pos=i;

    startt=clock();
        mergeSort(a,0,numEle);
    endt=clock();
   
    totalt=(double)(endt-startt)/CLOCKS_PER_SEC;
    printf("%lf",totalt);
   
   
}