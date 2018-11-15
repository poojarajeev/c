// write a programme to implement quick sort
#include<stdio.h>
#include<time.h>
#define num 10000

void quicksort(int list[], int low,int high){
   int pivot, i, j, temp;
    if (low < high)
    {
        pivot = low;
        i = low;
        j = high;
        while (i < j)
    {
        while (list[i] <= list[pivot] && i <= high)
            {
                i++;
            }
            while (list[j] > list[pivot] && j >= low)
            {
                j--;
            }
            if (i < j)
            {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
        temp = list[j];
        list[j] = list[pivot];
        list[pivot] = temp;
        quicksort(list, low, j - 1);
        quicksort(list, j + 1, high);
    }}


void main(){
   
    int list[num],i;
    clock_t startt,endt;
    double totalt;
    for(i=0;i<num;i++){
      scanf("%d", &list[i]);}
    startt=clock();
    quicksort(list, 0, num-1);
    endt=clock();
    totalt=((double)(endt-startt)/CLOCKS_PER_SEC);
    printf("THE TIME TAKEN IS%lf",totalt);
     
}


