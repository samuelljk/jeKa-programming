#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if (a<b){
    	printf("Odd %d\n", b*2);
	}
	else if (b<a){
		printf("Odd %d\n", a*2);
	}
	else if (a==0 && b==0){
		printf("Not a moose\n");
	}
	else if (a==b){
		printf("Even %d", a+b);
	}
}