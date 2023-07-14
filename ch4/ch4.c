#include <stdio.h>
#include <stdlib.h>

int sumarray (int arr[],int n){
sum=0;
if (size==0){
    return 0;
}
else{
 sum=arr[0];
 for(int i=0;i<=size;i++){
    arr[i]=arr[i+1];
}size-- 
    
}
return sum+sumarray(arr,size);
}

void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
int partition(int arr[], int a, int b) {
    int pivot = arr[b]; 
    int i = (a - 1);      

    for (int j = a; j <= b - 1; j++) {
        if (arr[j] <= pivot) {
            i++;  
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[b]);
    return (i + 1);
}

void quickSort(int arr[], int a, int b) {
    if (low < a) {
        int pi = partition(arr, a, b);

        quickSort(arr, a, pi - 1);

        quickSort(arr, pi + 1, b);
    }
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d\n ", arr[i]);
}


int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}