#include <stdio.h>
#include <string.h>

typedef struct foodInfo
{
    long long available;
    char name[1000];
    long long price;
} foodInfo;

int main()
{
    foodInfo
        foodInfo[1000];
    
    char
        charCache[1000];
    
    long long
        longlongCache;
    
    long long
        earnings = 0;
    
    for (long long i = 0; i < 1000; i++)
    {
        foodInfo[i].available = 0;
    }
    
    while (1)
    {
        char
            prompt[1000];
        
        scanf(" %s", prompt);
        
        if (strcmp(prompt, "ADD") == 0)
        {
            long long
                menuNum;
            
            scanf(" %lli", &menuNum);
            
            if (foodInfo[menuNum].available == 0)
            {
                foodInfo[menuNum].available = 1;
                
                scanf(" %[^\n]", foodInfo[menuNum].name);
                scanf(" %lli", &foodInfo[menuNum].price);
                
                printf("Added menu #%lli %s\n", menuNum, foodInfo[menuNum].name);
            }
            else
            {
                scanf(" %[^\n]", charCache);
                scanf(" %lli", &longlongCache);
                printf("Menu #%lli is already exist\n", menuNum);
            }
        }
        else if (strcmp(prompt, "INFO") == 0)
        {
            long long
                menuNum;
            
            scanf(" %lli", &menuNum);
            
            if (foodInfo[menuNum].available == 1)
            {
                printf("#%lli %s Rp %lli\n", menuNum, foodInfo[menuNum].name, foodInfo[menuNum].price);
            }
            else
            {
                printf("Menu #%lli doesn't exist\n", menuNum);
            }
        }
        else if (strcmp(prompt, "ORDER") == 0)
        {
            long long
                menuNum,
                quantity;
            
            scanf(" %lli %lli", &menuNum, &quantity);
            
            if (foodInfo[menuNum].available == 1)
            {
                printf("Ordered %llix %s for Rp %lli\n", quantity, foodInfo[menuNum].name, (foodInfo[menuNum].price*quantity));
                earnings += (foodInfo[menuNum].price*quantity);
            }
            else
            {
                printf("Menu #%lli doesn't exist\n", menuNum);
            }
        }
        else if (strcmp(prompt, "CLOSE") == 0)
        {
            printf("Earnings: Rp %lli\n", earnings);
            printf("TCanteen is closing.. thank you for the visit ^-^\n");
            break;
        }
        else
        {
            printf("Unknown command!\n");
        }
    }
}


