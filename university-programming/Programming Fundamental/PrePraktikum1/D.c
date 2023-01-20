#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
	if (a != b && a>=0 && b>=0 && a<=1000 && b<=1000){
	    if (a<b){
	    	if (b-a==1){
	    		printf("Dr. Chaz will have %d piece of chicken left over!", b-a);
			}else{
		 		printf("Dr. Chaz will have %d pieces of chicken left over!", b-a);   	
			}
		}
		else if (b<a){
			if (a-b==1){
				printf("Dr. Chaz needs %d more piece of chicken!", a-b);
			}else{
				printf("Dr. Chaz needs %d more pieces of chicken!", a-b);	
			}
		}
	}
}