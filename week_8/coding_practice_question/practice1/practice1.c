#include<stdio.h>

int findLargestElement(int arr[],int length);

int main(int argc, char const *argv[])
{
    int arr[] = {1,2,3,9,38,5};     
    printf("%i",findLargestElement(arr,sizeof(arr)/sizeof(arr[0])));
    return 0;
}


int findLargestElement(int arr[],int length){
    int largest = arr[0];
    for(int i = 1;i<length;i++){
        if(largest<arr[i]){
            largest = arr[i];
        }
    }
    return largest;
}