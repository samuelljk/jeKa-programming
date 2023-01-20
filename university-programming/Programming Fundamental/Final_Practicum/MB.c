#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long int ll;
typedef unsigned long long int ull;

typedef struct bombsite{
    char lokasi[20];
    char N[10];
};

typedef struct anarchist{
    char nama[20];
    int watch_site;
};

int findBmb(struct bombsite alqaeda[], char site[]){
    int i = 0;
    int flag = 1;
    while(flag){
        if (strcmp(alqaeda[i].lokasi, site) == 0){
            flag = 0;
            return i;
        }
        i++;
    }
    return 0;
}

int findTerr(struct anarchist terrorist[], char person[]){
    int i = 0;
    int flag = 1;
    while(flag){
        if (strcmp(terrorist[i].nama, person) == 0){
            flag = 0;
            return i;
        }
        i++;
    }
    return 0;
}

int main() {
    int T; 
	scanf("%d",&T);
    struct bombsite locations[100];
    struct anarchist terrorist[100];
    char command[10];
    int manyAlqaeda = 0, manyTerrorist = 0;
    scanf("%s", command);
    while(T--) {
        if (strcmp(command, "set")==0){
            char next[20];
            scanf("%s",next);
            if (next[0] == '*'){
                scanf("%s", terrorist[manyTerrorist].nama);
                char trap; scanf("%s",&trap);
                char lokasiInput[20];
                scanf("%s", lokasiInput);
                terrorist[manyTerrorist].watch_site = findBmb(locations,lokasiInput);
                manyTerrorist++;
            }else{
                scanf("%s",locations[manyAlqaeda].N);
                strcpy(locations[manyAlqaeda].lokasi,next);
                manyAlqaeda++;
            }
        }else if (strcmp(command,"chg")==0){
            char next[20]; scanf("%s",next);
            if (strcmp(next,"*")==0){
                char nama[20]; scanf("%s",nama);
                char N[10]; scanf("%s",N);
                if (N[0] == '&'){
                    char L[20]; scanf("%s",L);
                    int indexTerrorist = findTerr(terrorist,nama);
                    int indexBombsite = findBmb(locations, L);
                    terrorist[indexTerrorist].watch_site = indexBombsite;
                } else{
                    int indexTerrorist = findTerr(terrorist,nama);
                    strcpy(locations[terrorist[indexTerrorist].watch_site].N,N);
                }
            }else{
                int indexBombsite = findBmb(locations, next);
                scanf("%s",locations[indexBombsite].N);
            }
        }else if (strcmp(command, "get")==0){
            char trap[20]; scanf("%s",trap);
            char nama[20]; scanf("%s",nama);
            int indexTerrorist = findTerr(terrorist, nama);
            int indexBombsite = terrorist[indexTerrorist].watch_site;
            printf("%s\n", locations[indexBombsite].N);
        }
        scanf("%s", command);
    }
}