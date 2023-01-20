#include <stdio.h>

int main(){
	int a, b, c, tot_s, res;
	scanf("%d %d %d", &a, &b, &c);
	if (a%9==0 || b%9==0 || c%9==0){
		a *= 3600;
		b *= 60;
		tot_s = a+b+c;
		res = (tot_s/999)*9;
		printf("%d", res);
	}else{
		printf("%d", 0);
	}
}