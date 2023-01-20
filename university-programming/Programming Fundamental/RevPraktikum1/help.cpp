#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int d, y, m, res;
    scanf("%d %d %d", &d, &m, &y, res);
    if (y%4==0){
    	printf("it is a leap year.");
	}
	else if (d>28 && m==2){
		printf("invalid date or month!!!");
	}
	else if (d>30 && m==4 || m==6 || m==9 || m==11){
		printf("invalid date or month!!!");
	}
	else{
		if (m==1){
			res = d;
			printf("Day number: %d\n", res);
		}
		else if (m==2){
			res = 31 + d;
			printf("Day number: %d\n", res);
		}
		else if (m==3){
			res = 31 + 28 + d;
			printf("Day number: %d\n", res);
		}
		else if (m==4){
			res = 31 + 28 + 31 + d;
			printf("Day number: %d\n", res);
		}
		else if (m==5){
			res = 31 + 28 + 31 + 30 + d;
			printf("Day number: %d\n", res);
		}
		else if (m==6){
			res = 31 + 28 + 31 + 30 + 31 + d;
			printf("Day number: %d\n", res);
		}
		else if (m==7){
			res = 31 + 28 + 31 + 30 + 31 + 30 + d;
			printf("Day number: %d\n", res);
		}
		else if (m==8){
			res = 31 + 28 + 31 + 30 + 31 + 30 + 31 + d;
			printf("Day number: %d\n", res);
		}
		else if (m==9){
			res = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + d;
			printf("Day number: %d\n", res);
		}
		else if (m==10){
			res = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + d;
			printf("Day number: %d\n", res);
		}
		else if (m==11){
			res = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + d;
			printf("Day number: %d\n", res);
		}
		else if (m==12){
			res = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + d;
			printf("Day number: %d\n", res);
		}
	}
}