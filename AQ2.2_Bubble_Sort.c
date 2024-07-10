//2. Modify bubble sort functions to return number of passes and number of comparisons and print both in main function.

#include<stdio.h>
#define SIZE 6
#define Swap(a,b) { int t = a; a = b; b = t;}

void bubble_sort(int arr[SIZE],int*,int*,int*);
void display(int arr[SIZE]);

int main()
{
    int arr1[SIZE] = {31,21,61,41,11,41};
    int iterations1=0, comparisons1=0 , pass1=0;
    printf("\n Before bubble Sort :\n");
    display(arr1);
    bubble_sort(arr1,&iterations1,&comparisons1,&pass1);
    printf("\n After bubble Sort :\n");
    display(arr1);
    printf("\n bubble sort: Iterations = %d  comparisons = %d  passes = %d\n",iterations1,comparisons1,pass1);
    
    return 0;
}

void bubble_sort(int arr[SIZE],int *iterations1,int *comparisons1, int *pass1)
{
   
    for(int it = 0; it < SIZE-1; it++)
    {
        
        *iterations1=*iterations1+1;
        for(int pos = 0; pos < SIZE-1-it; pos++)
        {
            *comparisons1=*comparisons1+1;
            if(arr[pos] > arr[pos+1])
            {
              
                Swap(arr[pos],arr[pos+1]);
            }
            else 
               *pass1= *pass1+1;
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
