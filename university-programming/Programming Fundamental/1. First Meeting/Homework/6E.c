#include <stdio.h>

int main(){
	int a;
	float b;
	scanf("%d", &a);
	b = (float)a;
	while (b>1.0){
		b /= 2.0;
	}
	if (b == 1.0){
		printf("ya");
	}else{
		printf("bukan");
	}
}