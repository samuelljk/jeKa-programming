#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int a, b, least=0, most=0;
	scanf("%d", &a);
	if (a>=1 && a<=100){
		for (int i=0; i<a; i++){
			scanf("%d", &b);
			if (i==0){
				least = b;
				most = b;
			}
			else if (b<least && b<most){
				least = b;
			}
			else if (b>most && b>least){
				most = b;
			}
		}
		printf("%d %d", most, least);
	}
}