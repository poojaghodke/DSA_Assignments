// Bubble Sort

#include<stdio.h>
#define SIZE 6
#define Swap(a,b){int t=a; a =b; b=t;}

void display(int arr[SIZE]);
void efficient_bubble_sort(int arr[SIZE],int *iterations, int *comparisons);

int main()
{
     int iterations, comparisons;
   int arr[SIZE] = {30,20,60,50,10,40};
   //int arr[SIZE] = {11,22,33,44,55,66};
    printf("\n Before sort :\n");
    display(arr);

    printf("\n After sort :\n");
   // bubble_sort(arr);
    efficient_bubble_sort(arr,&iterations,&comparisons);
    printf("Iterations = %d  comparisons = %d\n",iterations,comparisons);
    display(arr);
    printf("\n");

    return 0;
}



void display(int arr[SIZE])
{
    for(int i =0;i<SIZE;i++)
    {
        printf("%4d",arr[i]);
    }
}


// Efficient Bubble sort
void efficient_bubble_sort(int arr[SIZE],int *iterations, int *comparisons)
{
    *iterations = 0;
    *comparisons = 0;
    int flag;
    // Iterations
    for(int it = 0; it < SIZE-1; it++)
    {
        // comparisons
        (*iterations)++;
        flag = 1;
        for(int pos = 0; pos < SIZE-1-it; pos++)
        {
            (*comparisons)++;
            if(arr[pos] > arr[pos+1])
            {
                // swap
                Swap(arr[pos],arr[pos+1]);
                flag = 0;
            }
        }
        if(flag == 1)
            break;
    }
}