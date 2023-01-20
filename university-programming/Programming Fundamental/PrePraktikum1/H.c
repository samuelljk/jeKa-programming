#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int t;
    long long a, b;
    scanf("%d", &t);
    for (int i=0; i<t; i++){
    	scanf("%lld %lld", &a, &b);
		if (a==b){
			printf("=\n");
		}
		else if (a>b){
    		printf(">\n");
		}
		else if (a<b){
			printf("<\n");
		}
	}
}