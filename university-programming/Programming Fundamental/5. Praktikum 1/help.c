/*

    PRAKTIKUM DASPROG 1
    by Samuel Josefano Kaloh | 5025221065
    Problem: Help
    Date & Time: 22/9/2022 & _:_ AM
    
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int d, m, y;
    scanf("%d %d %d", &d, &m, &y);
    if (d>0 && d<=31 && m>0 && m<=12 && y>0 && y<=2080){
		if (d<29 && m == 2){
	   		printf("invalid date or month!!!");
		}
		else if (y%4==0 || y%100==0 && y%400==0){
			printf("it is a leap year.");
		}
		else{
			printf("Day number: %d", d);
		}
	}
}