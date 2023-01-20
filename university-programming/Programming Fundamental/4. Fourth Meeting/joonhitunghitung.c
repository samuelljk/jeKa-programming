#include <stdio.h>

int main(){
	int a, b, res, form, n;
	scanf("%d %d", &a, &b);
	n = (b-a)/2+1;
	form = (n*((2*a)+(n-1)*2))/2;
//	for (int i=a; i<=b; i++){
//		if (i%2 != 0){
//			res += i;
//		}
//	}
	printf("%d", form);
}