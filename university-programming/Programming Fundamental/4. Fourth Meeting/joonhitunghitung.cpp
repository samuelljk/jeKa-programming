#include <stdio.h>

int main(){
	int a, b, res;
	scanf("%d %d", &a, &b);
	for (int i=a-1; i<b+1; i++){
		if (i%2 != 0){
			res += i;
		}
	}
	printf("%d", res);
}