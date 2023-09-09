#include <stdio.h>

int main()\
{
    char letter;
    char word[100];
    char sentence[100];

    scanf("%c", &letter);
    scanf(" %s", word);
    scanf(" %[^\n]s\n", sentence);

    printf("%c\n", letter);
    printf("%s\n", word);
    printf("%s\n", sentence);

    return 0;
}