#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int a, b, c, n;
    scanf("%d %d %d %d", &a, &b, &c, &n);
	if (a>=0 && a<=10 && b>=0 && b<=10 && c>=0 && c<=10 && n>=1 && n<=20){
	    if (a>0 && b>0 && c>0 && a+b+c>=n && n>=3){
	    	printf("YES");
		}else{
			printf("NO");
		}
	}
}