/*

    PRAKTIKUM DASPROG 1
    by Samuel Josefano Kaloh | 5025221065
    Problem: Kenjeran

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int mobil, total_mobil, sisa;
	mobil = ((c/85)*12+(((c%85)-25)/5));
	total_mobil = a+b+1;
	sisa = total_mobil-mobil;
	if (a-mobil<0 && sisa>0){
		printf("YES! ");
		printf("%d", sisa);
	}
	else if (a-mobil<0 && sisa<0){
		printf("YES! ");
		printf("%d", 0);
	}
	else{
		printf("NO! ");
		printf("%d", sisa);
	}
}
