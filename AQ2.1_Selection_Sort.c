//2. Modify selection sort functions to return number of passes and number of comparisons and print both in main function.

// Selection sort

#include<stdio.h>
#define SIZE 6
#define Swap(a,b) { int t = a; a = b; b = t;}

void Selection_sort(int arr[SIZE],int*,int*,int*);
void display(int arr[SIZE]);

int main()
{
    int arr[SIZE] = {30,20,60,50,10,40};
    int iterations=0, comparisons=0 , pass=0;
    printf("\n Before selection Sort :\n");
    display(arr);
    Selection_sort(arr,&iterations,&comparisons,&pass);
    printf("\n After selection Sort :\n");
    display(arr);
    printf("\n selection sort: Iterations = %d  comparisons = %d  passes = %d\n",iterations,comparisons,pass);

    return 0;
}

void Selection_sort(int arr[SIZE],int *iterations,int *comparisons,int *pass)
{
    int sel_pos,pos;
    for(sel_pos = 0; sel_pos < SIZE-1;sel_pos++)
    {
        *iterations=*iterations+1;
        for(pos = sel_pos+1; pos < SIZE; pos++)
        {
            *comparisons=*comparisons+1;
            if(arr[sel_pos] > arr[pos])
            {
                Swap(arr[sel_pos],arr[pos]);
            }
            else 
             *pass=*pass+1;
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
