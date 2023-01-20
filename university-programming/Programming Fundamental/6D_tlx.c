#include <stdio.h>

int main(){
	int a, res=0;
	while (scanf("%d", &a) != EOF){
		res = res + a;
	}
	printf("%d\n", res);
}