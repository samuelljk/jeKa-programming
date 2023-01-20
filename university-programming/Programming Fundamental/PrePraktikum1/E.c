#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int g, s, c, bp;
    scanf("%d %d %d", &g, &s, &c);
    bp = (g*3) + (s*2) + (c*1);
    if (bp>7){
    	printf("Province or Gold\n");
	}
	else if (bp==6 || bp==7){
		printf("Duchy or Gold\n");
	}
	else if (bp==5){
		printf("Duchy or Silver\n");
	}
	else if (bp==3 || bp==4){
		printf("Estate or Silver\n");
	}
	else if (bp==2){
		printf("Estate or Copper\n");
	}
	else if (bp==1 || bp==0){
		printf("Copper\n");
	}
	
}