#include <stdio.h>
#include <string.h>

typedef struct Data
{
    char name[1000];
    long long perMinute;
} Data;

typedef struct TeamData
{
    char person1[1000];
    char person2[1000];
    long long teamPerMinute;
} TeamData;

int main()
{
    long long
        contestants, 
        duration;
    
    scanf(" %lli %lli", &contestants, &duration);

    Data
        data[contestants];
    
    TeamData
        teamData[contestants];
    
    for (long long i = 0; i < contestants; i++)
    {
        scanf(" %s", data[i].name);
        scanf(" %lli", &data[i].perMinute);
    }
    
    for (long long i = 0; i < (contestants/2); i++)
    {
        teamData[i].teamPerMinute = 0;
        
        scanf(" %s %s", teamData[i].person1, teamData[i].person2);
        
        for (long long j = 0; j < contestants; j++)
        {
            if (strcmp(teamData[i].person1, data[j].name) == 0)
            {
                teamData[i].teamPerMinute += data[j].perMinute;
            }
            if (strcmp(teamData[i].person2, data[j].name) == 0)
            {
                teamData[i].teamPerMinute += data[j].perMinute;
            }
        }
    }
    
    long long
        maxPerMinute = 0,
        winnerTeam = 0;
    
    for (long long i = 0; i < (contestants/2); i++)
    {
        if (maxPerMinute <= teamData[i].teamPerMinute)
        {
            maxPerMinute = teamData[i].teamPerMinute;
            winnerTeam = i;
        }
    }
    
    printf("%s & %s Win!\n", teamData[winnerTeam].person1, teamData[winnerTeam].person2);

    printf("Total Eaten: %lli", (teamData[winnerTeam].teamPerMinute * duration));
    
    return 0;
}