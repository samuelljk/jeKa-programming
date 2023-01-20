#include <stdio.h>

int main(){
	int a, b;
	b = 0;
	scanf("%d", &a);
	for (int i=1; i<a+1; i++){
		for (int j=1; j<i+1; j++){
			if (b>9){
				b = 0;
			}
			printf("%d", b);
			b++;
		}
		printf("\n");
	}
}