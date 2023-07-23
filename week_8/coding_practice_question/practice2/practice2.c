#include<stdio.h>

int lengthOf(int* arr);

int main(int argc, char const *argv[])
{
    int arr[] = {1,2,3,4};
    printf("%i",lengthOf(arr));
    return 0;
}

int lengthOf(int* arr){
    int length = 0;
    while (arr[length])
    {
        length++;
    }
    return length-1;      
}


