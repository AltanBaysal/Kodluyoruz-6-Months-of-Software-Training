#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num1;
    int num2;

    int pnum1;
    int pnum2;

    pnum1 = num1;
    pnum2 = num2;

    pnum1 = 2;
    pnum2 = 1;

    printf("num1: %i\n",pnum1);
    printf("num2: %i\n",pnum2);

    return 0;
}
