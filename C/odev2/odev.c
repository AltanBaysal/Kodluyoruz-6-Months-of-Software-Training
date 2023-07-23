#include<stdio.h>

int main(int argc, char const *argv[])
{
    int number; 
    printf ("number: ");  
    scanf( "%d", &number);
    printf ("%d",fac(number));
    return 0;
}

int fac(int num){
    if(num == 1){
        return 1;
    }
    return fac(num-1)*num;
}
