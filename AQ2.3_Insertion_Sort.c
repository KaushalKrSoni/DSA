//2. Modify insertion sort functions to return number of passes and number of comparisons and print both in main function.

#include<stdio.h>
#define SIZE 6
#define Swap(a,b) { int t = a; a = b; b = t;}

void Insertion_sort(int arr[SIZE],int*,int*,int*);
void display(int arr[SIZE]);

int main()
{
    int iterations2=0, comparisons2=0, pass2=0;
    int arr2[SIZE] = {32,22,62,52,22,42};
    printf("\n Before insertion Sort :\n");
    display(arr2);
    Insertion_sort(arr2,&iterations2,&comparisons2,&pass2);
    printf("\n After insertion Sort :\n");
    display(arr2);
    printf("\n insertion sort: Iterations = %d  comparisons = %d  passes = %d\n",iterations2,comparisons2,pass2);

    return 0;
}

void Insertion_sort(int arr[SIZE],int *iterations2,int *comparisons2,int *pass2)
{
    int temp,i,j;
    for(i = 1; i < SIZE;i++)
    {
        *iterations2=*iterations2+1;
        temp = arr[i];
        for(j = i-1; j >= 0 && temp < arr[j]; j--)
        {
            *comparisons2=*comparisons2+1;
            arr[j+1] = arr[j];
        }
        if(j<=0 || temp > arr[j])
            pass2=pass2+1;
        arr[j+1] = temp;
    }
}

void display(int arr[SIZE])
{
    for(int i =0;i<SIZE ; i++)
    {
        printf("%4d",arr[i]);
    }
}
