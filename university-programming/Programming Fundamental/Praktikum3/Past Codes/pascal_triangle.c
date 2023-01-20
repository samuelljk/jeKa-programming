#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fact(int x){
	if (x<=1){
		return 1;
	}else{
		return x*fact(x-1);
	}
}

int main(){
	int n;
	scanf("%d", &n);
	for (int i=0; i<n; i++){
		for (int j=0; j<(n-i-1); j++){
			printf("  ");
		}
		for (int j=0; j<=i; j++){
			printf("%d  ", fact(i)/(fact(j)*fact(i-j)));
		}
		printf("\n");
	}
}