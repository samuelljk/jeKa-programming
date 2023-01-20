/*

    PRAKTIKUM DASPROG 1
    by Samuel Josefano Kaloh | 5025221065
    Problem: Cards

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int num, a, b, numA, numB;
    scanf("%d", &num);
    scanf("%d %d", &a, &b);
    numA = ((num%((int)pow(10, a)))-(num%(int)pow(10, a-1)))/(int)pow(10, a-1);
    numB = ((num%((int)pow(10, b)))-(num%(int)pow(10, b-1)))/(int)pow(10, b-1);
    if (numA==numB){
    	printf("Win 100$!\n");
	}
	else if (numA%2==0 && numB%2!=0){ //even & odd
		printf("Win 50$!\n");
	}
	else if (numA%2!=0 && numB%2==0){ //odd & even
		printf("Win 50$!\n");
	}
	else if (numA%2==0 && numB%2==0){
		printf("Lose!\n");
	}
	else if (numA%2!=0 && numB%2!=0){
		printf("Lose!\n");
	}
}
