/*

    PRAKTIKUM DASPROG 2
    by Samuel Josefano Kaloh | 5025221065
    Problem: ZIMB

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int dig;
    unsigned long long int numb, res;
    char x;
    scanf("%d", &dig);
    for (int i=0; i<dig; i++){

    }
    scanf("%llu", &numb);
    scanf("\n");
    scanf("%c", &x);
    if (x=='L'){
        printf("Lose! you're no longer a quadrillionaire now :\"(");
    }else if (x=='J'){
    	
        res = numb*5;
        printf("Jackpot!\nPrize: $%lld", res);
    }else if (x=='W'){
        res = numb*2;
        printf("Win!\nPrize: $%lld", res);
    }
}