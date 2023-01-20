#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int seq(int x){
	if (x==1 || x==2){
		return 0;
	}else if (x==3){
		return 1;
	}else if (x<=10){
		return seq(x-1)+seq(x-2)+seq(x-3);
	}else if (x>10){
		return seq(x-1)+seq(x-2);
	}
}

int main(){
	int n, x, result;
	scanf("%d", &n);
	for (int i=0; i<n; i++){
		scanf("%d", &x);
		result = seq(x);
		printf("%d\n", result);
	}
}