#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long int ll;
typedef unsigned long long int ull;

struct menu{
    char name[64];
    int price;
    int stock;
    int available;
};

int main() {
    char request[10];
    ull earnings = 0;
    scanf("%s",request);
    struct menu *food = (struct menu *) malloc(1000001*sizeof(struct menu));
    while(strcmp(request,"CLOSE") != 0) {
        if (strcmp(request,"ADD") == 0) {
            int id; scanf("%d",&id);
            char temp; scanf("%c",&temp);
            if ((food+id)->available==0) {
                scanf("%[^\n]%*c",(food+id)->name);
                scanf("%d %d",&(food+id)->price, &(food+id)->stock);    
                (food+id)->available = 1;
                printf("Menu added\n");
            }
            else printf("Menu is already exists\n");
        } else if (strcmp(request,"INFO") == 0) {
                int id; scanf("%d",&id);
                if ((food+id)->available==1) {
                    printf("#%d %s\n",id, (food+id)->name);
                    printf("Price : Rp%d\n",(food+id)->price);
                    printf("Stock : %dx\n",(food+id)->stock);
                    printf("\n");
                } else printf("Menu does not exist\n");
        } else if (strcmp(request,"ORDER") == 0) {
            int id,amount;
            scanf("%d%d",&id, &amount);
            if ((food+id)->available==0) printf("Menu does not exist\n");
            else {
                if (amount == 0) printf("So you want to order or what\n");
                else if ((food+id)->stock - amount >= 0) {
                printf("Ordered %dx %s for Rp%d\n", amount, 
                                                    (food+id)->name, 
                                                    amount * (food+id)->price);
                earnings += amount * (food+id)->price;
                (food+id)->stock -= amount;
                } else {
                    printf("Apologize, the stock is not enough\n");
                }
            }
        } else if (strcmp(request,"DISC") == 0) {
            int id;
            int disc;
            scanf("%d %d",&id,&disc);
            if ((food+id)->available==0) printf("Menu does not exist\n");
            else {
                double price = (food+id)->price;
                price *= ((100-(double)disc) / 100); 
                (food+id)->price = price;
                printf("Discount added\n");
            }
        } else if (strcmp(request,"REMOVE") == 0) {
            int id; scanf("%d",&id);
            if ((food+id)->available==0) printf("Menu does not exist\n");
            else {
                (food+id)->available = 0;
                printf("Menu removed\n");
            }
        } else {printf("Unknown command\n");}
        scanf("%s",request);
    }
    free(food);
    food = NULL;
    printf("Earnings: Rp%llu\n",earnings);
    printf("Informatics canteen is closing... thanks for the visit!\n");
}