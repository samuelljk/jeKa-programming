#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int n=0, id_temp;
typedef struct{
	int id;
	char name[100], type[100];
	long int level, stat[3];
} pokStat;

void swap(pokStat *xp, pokStat *yp) {
   pokStat temp = *xp;
   *xp = *yp;
   *yp = temp;
}

void bubSortID(pokStat arr[], int n){
	int i, j, swapped;
	pokStat temp;
   	for (i = 0; i < n-1; i++) {
      	swapped = 0;
      	for (j = 0; j < n-i-1; j++) {
         	if (arr[j].id > arr[j+1].id) {
            	swap(&arr[j], &arr[j+1]);
            	swapped = 1;
         	}
      	}
      	if (swapped == 0){
        	break;
        }
   	}
}

void bubSort(pokStat arr[], int n, int selectedStat){
	int i, j, swapped;
   	for (i = 0; i < n-1; i++) {
      	swapped = 0;
      	for (j = 0; j < n-i-1; j++) {
         	if (arr[j].stat[selectedStat] > arr[j+1].stat[selectedStat]) {
            	swap(&arr[j], &arr[j+1]);
            	swapped = 1;
         	}
         	else if (arr[j].stat[selectedStat] > arr[j+1].stat[selectedStat]){
         		bubSortID(arr, 6);	
			}
      	}
      	if (swapped == 0){
        	break;
        }
   	}
}

int main(){
	pokStat pokemon[n];
	for (int i=0; i<n; i++){
		scanf("%d %s %s %ld %ld %ld %ld", &pokemon[i].id, pokemon[i].name, pokemon[i].type, &pokemon[i].level, &pokemon[i].stat[0], &pokemon[i].stat[1], &pokemon[i].stat[2]);
	}
	bubSort(pokemon, 6, 0);
	for (int i=0; i<n; i++){
		printf("Best Pokemon for HP is:\n%d\n%s\n%s\n%ld\n%ld %ld %ld\n", &pokemon[i].id, pokemon[i].name, pokemon[i].type, &pokemon[i].level, &pokemon[i].stat[0], &pokemon[i].stat[1], &pokemon[i].stat[2]);
	}
	bubSort(pokemon, 6, 1);
	for (int i=0; i<n; i++){
		printf("Best Pokemon for HP is:\n%d\n%s\n%s\n%ld\n%ld %ld %ld\n", &pokemon[i].id, pokemon[i].name, pokemon[i].type, &pokemon[i].level, &pokemon[i].stat[0], &pokemon[i].stat[1], &pokemon[i].stat[2]);
	}
	bubSort(pokemon, 6, 2);
	for (int i=0; i<n; i++){
		printf("Best Pokemon for HP is:\n%d\n%s\n%s\n%ld\n%ld %ld %ld\n", &pokemon[i].id, pokemon[i].name, pokemon[i].type, &pokemon[i].level, &pokemon[i].stat[0], &pokemon[i].stat[1], &pokemon[i].stat[2]);
	}
}