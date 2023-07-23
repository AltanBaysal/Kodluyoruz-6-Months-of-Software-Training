#include<stdio.h>

void ReverseText(){

    char str1[50], temp; 
    printf ("Enter a string to be reversed: ");  
    scanf( "%s", str1);


    int i = 0, j =0;    
    j = strlen(str1) - 1;
    while ( i < j) {  
        temp = str1[j];  
        str1[j] = str1[i];  
        str1[i] = temp;  
        i++;
        j--; 
    }  

    printf ("%s", str1);  
}

void IsPolindrom(){
    char str1[50], temp; 
    printf ("text: ");  
    scanf( "%s", str1);

    int i = 0, j =0;    
    j = strlen(str1) - 1;

    while ( i < j) {  
        if(str1[j] != str1[i]){
            printf ("Not a Polindrom");
            return;
        }
        i++;
        j--; 
    }  

    printf ("Polindrom");  
}

void SortIntArr(){
    int length = 4;
    int numbers[length];
    for(int i = 0; i < length;i++){
        int num;
        printf("Enter an integer: ");
        scanf("%d", &num); 
        numbers[i] = num;
    }
    
    for(int i = 0;i<length;i++){
        int minIndex = i;
        for(int j =i+1; j<length; j++){
            if( numbers[j]<numbers[minIndex]){
                minIndex = j;
            }
        }

        int tempt = numbers[i];
        numbers[i] = numbers[minIndex];
        numbers[minIndex] = tempt;
    }

    for(int i = 0;i<length;i++){
        printf("%d ", numbers[i]);
    } 
}


int main(int argc, char const *argv[])
{
    SortIntArr();
    return 0;
}

