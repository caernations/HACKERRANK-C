#include <stdio.h>

int main() 
{
    char words[100];
    printf("Hello, World!\n");
    scanf("%[^\n]s\n", words);
    printf("%s", words);
    
    return 0;
}