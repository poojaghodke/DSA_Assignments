// Insertion Sort

#include<stdio.h>
#define SIZE 6
void Insertion_sort(int arr[SIZE],int *iterations, int *comparisons);
void display(int arr[SIZE]);

int main()
{
    int iterations, comparisons;
    int arr[SIZE] = {55,44,22,66,11,33};

    printf("\n Before sort :\n");
    display(arr);

    Insertion_sort(arr,&iterations,&comparisons);
    printf("\n After sort :\n");
    printf("Iterations = %d  comparisons = %d\n",iterations,comparisons);
    display(arr);
    printf("\n");
    return 0;
}

void Insertion_sort(int arr[SIZE],int *iterations, int *comparisons)
{
    *iterations = 0;
    *comparisons = 0;
    int temp,i,j;
    for(i = 1; i < SIZE;i++)
    {
        (*iterations)++;
        temp = arr[i];
        for(j = i-1; j >= 0 && temp < arr[j]; j--)
        {
            (*comparisons)++;
            // shift arr[j] to j+1 index
            arr[j+1] = arr[j];
        }
        // copy temp to j+1 index
        arr[j+1] = temp;
    }
}

void display(int arr[SIZE])
{
    for(int i =0;i<SIZE;i++)
    {
        printf("%4d",arr[i]);
    }
}