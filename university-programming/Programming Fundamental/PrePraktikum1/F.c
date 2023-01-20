#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    if (a!=0 && b!=0){
    	if (a>0 && b>0){
    		printf("%d\n", 1);
		}
    	else if (a<0 && b>0){
    		printf("%d\n", 2);
		}
    	if (a<0 && b<0){
    		printf("%d\n", 3);
		}
    	if (a>0 && b<0){
    		printf("%d\n", 4);
		}
	}
}