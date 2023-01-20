#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void odd(int x){
	printf("%d\n", (2*x)+1);
}

void even(int x){
	printf("%d\n", (2*x)-1);	
}

int main(){
	int n, m;
	scanf("%d", &n);
	for (int i=0; i<n; i++){
		scanf("%d", &m);
		if (m%2==0){
			even(m);
		}else{
			odd(m);
		}
	}
}