#include <stdio.h>
#include <string.h>

void reverse(char *stringInput)
{
    int length = strlen(stringInput);
    for (int i=length-1; i>=0; i--)
    {
        printf("%c", stringInput[i]);
    }
    printf("\n");
}

int main()
{
    char stringInput[1000][1000];
    int stringCount=0;
    int counter=0;
    while (counter==0)
    {
        scanf(" %s", stringInput[stringCount]);

        if (strcmp(stringInput[stringCount], "exit") == 0)
        {break;}
        else
        {stringCount++;}
    }
    
    for (int i = 0; i < stringCount; i++)
    {
        reverse(stringInput[i]);
    }

    return 0;
}
