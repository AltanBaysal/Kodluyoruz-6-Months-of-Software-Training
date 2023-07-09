int main(int argc, char const *argv[])
{
    float f;
    
    printf("Enter a float value : ");
    scanf("%f", &f);
    printf("hex is %x", *(unsigned int*)&f);
    return 0;
}
