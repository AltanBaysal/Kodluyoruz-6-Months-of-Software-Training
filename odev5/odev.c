#include<stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fptr = NULL;
    fptr = fopen("test.txt","w");
    char text[6] = {'h','e','l','l','o','!'};
    for (int i = 0; i < 6; i++)
    {
        fputc(text[i],fptr);
    }
    fclose(fptr);
    
    fptr = fopen("test.txt","r");
    char ch;
    while ((ch = fgetc(fptr)) != EOF )
    {
        printf("%c",ch);
    }
    
    fclose(fptr);
    return 0;
}
