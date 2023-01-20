#include <stdio.h>
int main(){
	int a1, b1;
	float a2, b2, res;
	scanf("%d %d", &a1, &b1);
	a2 = (float)a1;
	b2 = (float)b1;
	res = (a2*b2)/2;
	printf("%.2f", res);
}