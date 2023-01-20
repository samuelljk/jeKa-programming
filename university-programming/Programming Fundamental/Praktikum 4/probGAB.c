#include <stdio.h>
#include <string.h>

int main()
{
    char
        string[1000],
        space = ' ';
    
    scanf(" %[^\n]", string);
    
    long long
        stringLen = strlen(string),
        consonants = 0,
        vowel = 0,
        capital = 0,
        lower = 0,
        finalLen = stringLen;
    
    for (long long i = 0; i < stringLen; i++)
    {
        if (string[i] == 'a' || string[i] == 'e' || string[i] =='i' || string[i] =='o' || string[i] == 'u' || string[i] == 'A' || string[i] == 'E' || string[i] =='I' || string[i] =='O' || string[i] == 'U')
        {
            vowel++;
        }
        if (string[i] >= 65 && string[i] <= 90)
        {
            capital++;
        }
        if (string[i] == space)
        {
            finalLen--;
        }
    }
    
    consonants = finalLen - vowel;
    lower = finalLen - capital;
    
    printf("Vowel Number: %lli\n", vowel);
    printf("Number of Consonants: %lli\n", consonants);
    printf("Total Uppercase: %lli\n", capital);
    printf("Total Smallcase: %lli\n", lower);

    return 0;
}
