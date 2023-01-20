#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fib(int x){
	if (x==0){
		return 0;
	}
	else if (x==1 || x==2){
		return 1;
	}
	else{
		return (fib(x-1)+fib(x-2));
	}
}

int main(){
	int n;
	scanf("%d", &n);
	for (int i=0; i<n; i++){
		printf("%d ", fib(i));
	}
}