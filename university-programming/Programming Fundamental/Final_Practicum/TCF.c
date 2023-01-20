#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct people{
    char name[50];
    int age;
    char phone[50];
    struct people *bestie;
};

struct area{
    char name[50];
    int num_inhabitants;
    struct people **inhabitants;
};

void printArea(struct area areas[], int num_areas) {
    for (int i = 0; i < num_areas; i++)
    {
        printf("%s\n", areas[i].name);
        for (int j = 0; j < areas[i].num_inhabitants; j++)
        {
            printf("Name: %s\n", areas[i].inhabitants[j]->name);
            printf("Age: %d\n", areas[i].inhabitants[j]->age);
            printf("Phone Number:%s\n", areas[i].inhabitants[j]->phone);
            if (areas[i].inhabitants[j]->bestie != NULL)
            {
                printf("His/Her bestie is: %s\n", areas[i].inhabitants[j]->bestie->name);
                printf("His/Her contact info is as follows\n");
                printf("Name: %s\n", areas[i].inhabitants[j]->bestie->name);
				printf("Age: %d\n", areas[i].inhabitants[j]->bestie->age);
				printf("Phone Number:%s\n", areas[i].inhabitants[j]->bestie->phone);
            }
            else
            {
                printf("His/Her bestie is: No one\n");
            }
            printf("\n");
        }
    }
}

int main()
{
    int num_area, num_people, num_bestie;
    char friendA[50], friendB[50];
    scanf("%d", &num_area);
    struct area areas[num_area];
    for (int i=0;i<num_area;i++) {
        scanf("%s", areas[i].name);
        scanf("%d", &num_people);
        areas[i].num_inhabitants = num_people;
        areas[i].inhabitants = malloc(num_people * sizeof(struct People *));
        struct people *p = (struct people*) malloc(num_people * sizeof(struct people));
        for (int j=0;j<num_people;j++) {
            scanf("%s", (p+j)->name);
            scanf("%d", &(p+j)->age);
            scanf("%s", (p+j)->phone);
            areas[i].inhabitants[j] = (p+j);
        }
    }
    scanf("%d", &num_bestie);
    for (int i=0;i<num_bestie;i++) {
        scanf("%s %s", friendA, friendB);
        struct people *p1 = NULL;
        struct people *p2 = NULL;
        for (int j=0;j<num_area;j++) {
            for (int k=0;k<areas[j].num_inhabitants;k++) {
                if (strcmp(areas[j].inhabitants[k]->name,friendA) == 0) {
                    p1 = areas[j].inhabitants[k];
                }
                if (strcmp(areas[j].inhabitants[k]->name,friendB) == 0) {
                    p2 = areas[j].inhabitants[k];
                }
            }
        }
        if (p1 != NULL && p2 != NULL) {
            p1->bestie = p2;
        }
    }
    printArea(areas, num_area);
}