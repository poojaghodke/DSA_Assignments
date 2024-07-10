// Selection sort

#include<stdio.h>
#define SIZE 6
#define Swap(a,b) { int t = a; a = b; b = t;}

void Selection_sort(int arr[SIZE],int *iterations, int *comparisons);
void display(int arr[SIZE]);


int main()
{
    int iterations , comparisons ;
    int arr[SIZE] = {30,20,60,50,10,40};
  //int arr[SIZE] = {11,22,33,44,55,66};
    printf("\n Before Sort :\n");
    display(arr);

    Selection_sort(arr,&iterations,&comparisons);
    printf("\n After Sort :\n");
    printf("Iterations = %d  comparisons = %d\n",iterations,comparisons);
    display(arr);
    printf("\n");

    return 0;
}

void Selection_sort(int arr[SIZE],int *iterations, int *comparisons)
{
    int sel_pos,pos;
    *iterations = 0;
    *comparisons = 0;

    for(sel_pos = 0; sel_pos < SIZE-1;sel_pos++)
    {
        (*iterations)++;
        for(pos = sel_pos+1; pos < SIZE; pos++)
        {
            (*comparisons++);
            if(arr[sel_pos] > arr[pos])
            {
                // swap
                Swap(arr[sel_pos],arr[pos]);
            }
        }

    }
}

void display(int arr[SIZE])
{
    for(int i =0;i<SIZE ; i++)
    {
        printf("%4d",arr[i]);
    }
}