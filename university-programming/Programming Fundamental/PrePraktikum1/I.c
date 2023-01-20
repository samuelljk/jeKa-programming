#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int x, y;
    for (int i=0; i<15; i++){
		scanf("%d %d", &x, &y);
		if (x==0 && y==0){
			break;
		}
		else if (x+y==13){
			printf("Never speak again.\n");
		}
		else if (x>y){
			printf("To the convention.\n");
		}
		else if (x<y){
			printf("Left beehind.\n");
		}
		else if (x==y){
			printf("Undecided.\n");
		}
	}
}