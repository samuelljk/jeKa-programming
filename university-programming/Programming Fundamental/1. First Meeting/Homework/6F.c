#include <stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	for (int i=1; i<a+1; i++){
		if (a%i==0){
			printf("%d\n", a/i);
		}
		else{
			continue;
		}
	}
}